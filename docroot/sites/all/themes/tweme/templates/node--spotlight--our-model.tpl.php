<span>
    <?php
        $link_text = render($content['field_spotlight_image']);
        $link_text .= $title;
        $attr = array(
          'html' => true,
        );
        $output = l($link_text, 'node/'.$node->nid, $attr);
        print $output;
    ?>
</span>
