!function(e){Drupal.behaviors.primaryMenuOverlay={attach:function(n,o){e("#primaryMenu").on("show.bs.collapse",function(){e("#header").addClass("primary-menu-open"),e(".menu-text").text("Close"),e(".menu-icon").toggleClass("menu-icon-close"),e(".menu-icon").toggleClass("menu-icon-open")}),e("#primaryMenu").on("shown.bs.collapse",function(){e("#main-wrapper").hide(),e("#footer").hide(),e("#ui-global-footer").hide()}),e("#primaryMenu").on("hide.bs.collapse",function(){e("#main-wrapper").show(),e("#footer").show(),e("#ui-global-footer").show()}),e("#primaryMenu").on("hidden.bs.collapse",function(){e("#header").removeClass("primary-menu-open"),e(".menu-text").text("Menu"),e(".menu-icon").toggleClass("menu-icon-close"),e(".menu-icon").toggleClass("menu-icon-open")})}}}(jQuery),function(e){}(jQuery);
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbImVkdWNhdGlvbi5wcmltYXJ5X21lbnUuanMiLCJlZHVjYXRpb25fcmFkaXguc2NyaXB0LmpzIl0sIm5hbWVzIjpbIiQiLCJEcnVwYWwiLCJiZWhhdmlvcnMiLCJwcmltYXJ5TWVudU92ZXJsYXkiLCJhdHRhY2giLCJjb250ZXh0Iiwic2V0dGluZ3MiLCJvbiIsImFkZENsYXNzIiwidGV4dCIsInRvZ2dsZUNsYXNzIiwiaGlkZSIsInNob3ciLCJyZW1vdmVDbGFzcyIsImpRdWVyeSJdLCJtYXBwaW5ncyI6IkNBQUEsU0FBQUEsR0FDQUMsT0FBQUMsVUFBQUMsb0JBQ0FDLE9BQUEsU0FBQUMsRUFBQUMsR0FFQU4sRUFBQSxnQkFBQU8sR0FBQSxtQkFBQSxXQUNBUCxFQUFBLFdBQUFRLFNBQUEscUJBQ0FSLEVBQUEsY0FBQVMsS0FBQSxTQUNBVCxFQUFBLGNBQUFVLFlBQUEsbUJBQ0FWLEVBQUEsY0FBQVUsWUFBQSxvQkFJQVYsRUFBQSxnQkFBQU8sR0FBQSxvQkFBQSxXQUNBUCxFQUFBLGlCQUFBVyxPQUNBWCxFQUFBLFdBQUFXLE9BQ0FYLEVBQUEscUJBQUFXLFNBSUFYLEVBQUEsZ0JBQUFPLEdBQUEsbUJBQUEsV0FDQVAsRUFBQSxpQkFBQVksT0FDQVosRUFBQSxXQUFBWSxPQUNBWixFQUFBLHFCQUFBWSxTQUlBWixFQUFBLGdCQUFBTyxHQUFBLHFCQUFBLFdBQ0FQLEVBQUEsV0FBQWEsWUFBQSxxQkFDQWIsRUFBQSxjQUFBUyxLQUFBLFFBQ0FULEVBQUEsY0FBQVUsWUFBQSxtQkFDQVYsRUFBQSxjQUFBVSxZQUFBLHVCQUlBSSxRQzlCQSxTQUFBZCxLQUVBYyIsImZpbGUiOiJlZHVjYXRpb25fcmFkaXguc2NyaXB0LmpzIiwic291cmNlc0NvbnRlbnQiOlsiKGZ1bmN0aW9uICgkKSB7XG4gIERydXBhbC5iZWhhdmlvcnMucHJpbWFyeU1lbnVPdmVybGF5ID0ge1xuICAgIGF0dGFjaDogZnVuY3Rpb24gKGNvbnRleHQsIHNldHRpbmdzKSB7XG4gICAgICAvLyBXaGVuIHRoZSBwcmltYXJ5IG1lbnUgaXMgb3BlbmluZy4uLlxuICAgICAgJCgnI3ByaW1hcnlNZW51Jykub24oJ3Nob3cuYnMuY29sbGFwc2UnLCBmdW5jdGlvbigpIHtcbiAgICAgICAgJCgnI2hlYWRlcicpLmFkZENsYXNzKCdwcmltYXJ5LW1lbnUtb3BlbicpO1xuICAgICAgICAkKCcubWVudS10ZXh0JykudGV4dCgnQ2xvc2UnKTtcbiAgICAgICAgJCgnLm1lbnUtaWNvbicpLnRvZ2dsZUNsYXNzKCdtZW51LWljb24tY2xvc2UnKTtcbiAgICAgICAgJCgnLm1lbnUtaWNvbicpLnRvZ2dsZUNsYXNzKCdtZW51LWljb24tb3BlbicpO1xuICAgICAgfSlcblxuICAgICAgLy8gV2hlbiB0aGUgcHJpbWFyeSBtZW51IGlzIGRvbmUgb3BlbmluZy4uLlxuICAgICAgJCgnI3ByaW1hcnlNZW51Jykub24oJ3Nob3duLmJzLmNvbGxhcHNlJywgZnVuY3Rpb24gKCkge1xuICAgICAgICAkKCcjbWFpbi13cmFwcGVyJykuaGlkZSgpO1xuICAgICAgICAkKCcjZm9vdGVyJykuaGlkZSgpO1xuICAgICAgICAkKCcjdWktZ2xvYmFsLWZvb3RlcicpLmhpZGUoKTtcbiAgICAgIH0pXG5cbiAgICAgIC8vIEJlZm9yZSBjbG9zaW5nIHRoZSBwcmltYXJ5IG1lbnUuLi5cbiAgICAgICQoJyNwcmltYXJ5TWVudScpLm9uKCdoaWRlLmJzLmNvbGxhcHNlJywgZnVuY3Rpb24oKSB7XG4gICAgICAgICQoJyNtYWluLXdyYXBwZXInKS5zaG93KCk7XG4gICAgICAgICQoJyNmb290ZXInKS5zaG93KCk7XG4gICAgICAgICQoJyN1aS1nbG9iYWwtZm9vdGVyJykuc2hvdygpO1xuICAgICAgfSlcblxuICAgICAgLy8gV2hlbiB0aGUgcHJpbWFyeSBtZW51IGlzIGNsb3NlZC4uLlxuICAgICAgJCgnI3ByaW1hcnlNZW51Jykub24oJ2hpZGRlbi5icy5jb2xsYXBzZScsIGZ1bmN0aW9uKCkge1xuICAgICAgICAkKCcjaGVhZGVyJykucmVtb3ZlQ2xhc3MoJ3ByaW1hcnktbWVudS1vcGVuJyk7XG4gICAgICAgICQoJy5tZW51LXRleHQnKS50ZXh0KCdNZW51Jyk7XG4gICAgICAgICQoJy5tZW51LWljb24nKS50b2dnbGVDbGFzcygnbWVudS1pY29uLWNsb3NlJyk7XG4gICAgICAgICQoJy5tZW51LWljb24nKS50b2dnbGVDbGFzcygnbWVudS1pY29uLW9wZW4nKTtcbiAgICAgIH0pXG4gICAgfVxuICB9O1xufSkoalF1ZXJ5KTtcbiIsIi8qKlxuICogQGZpbGVcbiAqIEN1c3RvbSBzY3JpcHRzIGZvciB0aGVtZS5cbiAqL1xuKGZ1bmN0aW9uICgkKSB7XG4gIC8vIEFkZCB5b3VyIGNvZGUgaGVyZS5cbn0pKGpRdWVyeSk7XG4iXSwic291cmNlUm9vdCI6Ii9zb3VyY2UvIn0=
