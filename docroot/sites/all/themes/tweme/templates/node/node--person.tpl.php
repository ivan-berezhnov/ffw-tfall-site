<div class="container">

  <h2 class="page-title"><?php print $title; ?></h2>

  <div class="person-image">
     <?php print render($content['field_person_image']); ?>
  </div>

  <div class="person-copy">
  	 <div class="slug"><?php print render($content['field_country']); ?></div>
     <div class="person-title"><?php print render($content['field_job_title']); ?>
     </br ><?php print render($content['field_organization']); ?></div>
     <div class="person-bio"><?php print render($content['field_person_bio']); ?></div>
  </div>

</div>
