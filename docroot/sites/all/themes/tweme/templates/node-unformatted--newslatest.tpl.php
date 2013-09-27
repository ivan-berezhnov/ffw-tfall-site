<?php print render(views_embed_view('news','page_1')); //latest news ?>

<?php print render(views_embed_view('tfall_tweets','block')); //tweeter block ?>


<?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
<?php print render($widget_facebook); ?>
