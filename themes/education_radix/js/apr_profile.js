/*jshint ignore:start*/
var app = angular.module('aprProfile', ['angular.filter']);


app.config(function ($sceDelegateProvider) {

    $sceDelegateProvider.resourceUrlWhitelist(['self', '**']);
});
var TESTING = false;

if (TESTING) {
    app.constant('URL', 'https://test.its.uiowa.edu/facadmin/api/');
} else {
    app.constant('URL', 'https://apps.its.uiowa.edu/facadmin/api/');
}

    app.factory('TemplateService', function ($http, URL) {
    var getTemplates = function (aprKey, templateId) {
        return $http.get(URL + 'template?key=' + aprKey + '&template_id=' + templateId);
    };

    return {
        getTemplates: getTemplates
    };
});

app.factory('DataService', function ($http, URL) {
    var getData = function (aprKey, populationId, hawkid) {
        return $http.get(URL + 'info/?key=' + aprKey + '&population_id=' + populationId + '&hawkid=' + hawkid);
    };
    return {
        getData: getData
    };
});

app.directive('contentItem', function ($compile, TemplateService, DataService) {

    return {
        restrict: "E",
        scope: {
            hawkId: '@',
            templateId: '@',
            aprKey: '@',
            populationId: '@'
        },
        link: function (scope, element) {
            TemplateService.getTemplates(scope.aprKey, scope.templateId).then(function (response) {
                var template = response.data;
                DataService.getData(scope.aprKey, scope.populationId, scope.hawkId).then(function (response) {
                    scope.facultyInfo = response.data;
                    element.html(template);
                    $compile(element.contents())(scope);
                });
            });
        }
    };
});

app.filter('to_trusted', ['$sce', function($sce){
    return function(text) {
        return $sce.trustAsHtml(text);
    };
}]);
/*jshint ignore:end*/
