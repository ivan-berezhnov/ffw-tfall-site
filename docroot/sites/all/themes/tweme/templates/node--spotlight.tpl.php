<div class="container">

  <h2 class="page-title spotlight-type"><?php print render($content['field_spotlight_type']); ?></h2>
  <div class="row-fluid">
    <div class="span9">
      <h1><?php print $title; ?></h1>

      <div class="news__author-date">by <?php print $name; ?> | <?php print format_date($node->published_at, 'short'); ?>

          <div class="news__image">
            <?php if (isset($content['field_spotlight_image'])): ?>
              <?php print render($content['field_spotlight_image']); ?>
              <div class="news__image-caption">
                <?php print render($content['field_spotlight_image']['#items'][0]['title']); ?>
              </div>
            <?php endif; ?>
          </div>

          <div class="news__content">
            <?php if (isset($content['body'])): ?>
              <?php print render($content['body']); ?>
            <?php endif; ?>
          </div>
      </div>
    </div>
    <div class="span3">
      <?php print render(views_embed_view('tfall_tweets','block')); ?>
      <?php if (module_exists('widget_facebook')): ?>
        <?php $widget_facebook = widget_facebook_embed_homepage() ;?>
        <?php print render($widget_facebook); ?>
      <?php endif; ?>
    </div>
  </div>

</div>
