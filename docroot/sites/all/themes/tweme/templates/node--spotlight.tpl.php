<h2 class="page-title spotlight-type"><?php print render($content['field_spotlight_type']); ?></h2>
<div class="row-fluid">
  <div class="span12">
    <h1><?php print $title; ?></h1>
    <div class="news__author-date">by <?php print $name; ?> | <?php print format_date($node->published_at, 'short'); ?>
    <?php print render($content); ?>
    </div>
  </div>
</div>
