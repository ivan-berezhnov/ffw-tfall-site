<?php
/**
 * @file
 * pubteachforall_central.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function pubteachforall_central_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: wysiwyg_ckeditor
  $profiles['wysiwyg_ckeditor'] = array(
    'format' => 'wysiwyg_ckeditor',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Source' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Iframe' => 1,
          'Scayt' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4,h5,h6,pre',
      'css_setting' => 'self',
      'css_path' => '/sites/all/themes/tweme/stylesheets/style.css',
      'css_classes' => 'H1=h1
H2=h2
H3=h3
H4=div.page-section
BodySmall=div.small-body
BodyLarge=div.large-body
BlockQuote=div.block-quote
Slug=div.slug
SlugMedium=div.slug-medium
SlugLarge=div.slug-large
Stats=div.stats
Red=span.red
Orange=span.orange
Orange2=span.orange2
Beige=span.beige
Black=span.black
Almost black=span.almostblack
Dove gray=span.dovegrey
NGLightRegular=span.NewsGothicFSLightRegular
NGLightItalic=span.NewsGothicFSLightItalic
NGBookBoldItalic=span.NewsGothicFSBookBoldItalic
NGCapsLightRegular=span.NewsGothicFSCapsLightRegular
NGCapsBookRegular=span.NewsGothicFSCapsBookRegular
NGBookRegular=span.NewsGothicFSBookRegular
NGBookItalic=span.NewsGothicFSBookItalic
NGMediumBold=span.NewsGothicFSMediumBold
NGMediumBoldItalic=span.NewsGothicFSMediumBoldItalic',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
