<div class="container">

  <h2 class="page-title"><?php print $title; ?></h2>

  <div class="person-image">
     <?php print render($content['field_person_image']); ?>
  </div>

  <div class="person-copy">
     <div class="person-title"><?php print render($content['field_job_title']); ?></div>
     <div class="person-bio"><?php print render($content['field_person_bio']); ?></div>
  </div>

</div>
