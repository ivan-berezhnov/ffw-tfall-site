<div class="container">

  <h2 class="page-title">NEWS</h2>

  <div class="row-fluid">
    <div class="span12">

      <div class="row-fluid">

        <div class="span9">
          <div class="row-fluid">
            <div class="span12">
              <?php print render(views_embed_view('news','block_1')); //flexslider ?>
            </div>
          </div>

          <div class="row-fluid">
            <div class="span12">
              <?php print render(views_embed_view('news','page')); ?>
            </div>
          </div>

          <div class="row-fluid">
            <div class="span12">
              <a href="/news/latest"><div class="full-list">More News <span class="orange2">>></span></div></a>
            </div>
          </div>
        </div>

        <div class="span3">
          <?php print render(views_embed_view('tfall_tweets','block')); //twitter block ?>
        </div>

      </div>

    </div>

  </div>

</div>

