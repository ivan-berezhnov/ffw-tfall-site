<h2 class="page-title spotlight-type"><?php print render($content['field_spotlight_type']); ?></h2>
<div class="row-fluid">
  <div class="span9">
    <h1><?php print $title; ?></h1>
    <div class="news__author-date">By <?php print $name; ?> | <?php print format_date($node->published_at, 'short'); ?>
    <?php print render($content); ?>
    </div>
  </div>
  <div class="span3">
    <?php if (module_exists('widget_facebook')): ?>
      <?php $widget_facebook = widget_facebook_embed_homepage() ;?>
      <?php print render($widget_facebook); ?>
    <?php endif; ?>
  </div>
</div>
