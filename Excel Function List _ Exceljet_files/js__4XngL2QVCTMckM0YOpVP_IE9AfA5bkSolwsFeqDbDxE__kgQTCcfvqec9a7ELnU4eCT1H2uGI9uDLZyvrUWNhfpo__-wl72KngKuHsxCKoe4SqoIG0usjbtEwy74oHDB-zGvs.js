/* Source and licensing information for the line(s) below can be found at https://exceljet.net/sites/all/modules/contrib/fitvids/fitvids.js. */

(function($){Drupal.behaviors.fitvids={attach:function(context,settings){try
{if(typeof $.fn.fitVids!=='undefined'){if(typeof settings.fitvids!=='undefined'){var selectors=['body'];var simplifymarkup=true;var custom_domains=null;if(typeof settings.fitvids.selectors!=='undefined'){selectors=settings.fitvids.selectors;}
if(typeof settings.fitvids.simplifymarkup!=='undefined'){simplifymarkup=settings.fitvids.simplifymarkup;}
if(settings.fitvids.custom_domains.length>0){custom_domains=settings.fitvids.custom_domains;}
if(simplifymarkup){if($(".media-youtube-outer-wrapper").length){$(".media-youtube-outer-wrapper").removeAttr("style");$(".media-youtube-preview-wrapper").removeAttr("style");$(".media-youtube-outer-wrapper").removeClass("media-youtube-outer-wrapper");$(".media-youtube-preview-wrapper").removeClass("media-youtube-preview-wrapper");}
if($(".media-vimeo-outer-wrapper").length){$(".media-vimeo-outer-wrapper").removeAttr("style");$(".media-vimeo-preview-wrapper").removeAttr("style");$(".media-vimeo-outer-wrapper").removeClass("media-vimeo-outer-wrapper");$(".media-vimeo-preview-wrapper").removeClass("media-vimeo-preview-wrapper");}}
for(var x=0;x<selectors.length;x++){$(selectors[x]).fitVids({customSelector:custom_domains});}}}}
catch(e){window.console&&console.warn('Fitvids stopped with the following exception');window.console&&console.error(e);}}};}(jQuery));;;
/* Source and licensing information for the above line(s) can be found at https://exceljet.net/sites/all/modules/contrib/fitvids/fitvids.js. */
;/*})'"*/
