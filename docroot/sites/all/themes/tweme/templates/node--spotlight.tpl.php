<h2 class="page-title spotlight-type"><?php print render($content['field_spotlight_type']); ?></h2>
<div class="row-fluid">
  <div class="span12">
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
</div>
