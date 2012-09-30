(function($) {
    $(document).ready(function(){
        $('.view-content ul.views-fluid-grid-list li.views-fluid-grid-item .views-field-field-image').click(function() {
           if($(this).parent().hasClass('clicked'))
               return;
           $(this).parent().animate({ opacity: 1 }, 500, function() {});
           $('.view-content ul.views-fluid-grid-list li.views-fluid-grid-item.clicked').removeClass('clicked').children('.views-field-field-image').next().toggle('blind');
           $(this).parent().addClass('clicked'); 
           $('.view-content ul.views-fluid-grid-list li.views-fluid-grid-item:not(.clicked)').animate({ opacity: 0.4 }, 500, function() {});
           $(this).parent().addClass('clicked'); 
           $(this).next().toggle('blind');
        });
    });
})( jQuery );

