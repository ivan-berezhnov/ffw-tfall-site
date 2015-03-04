<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php
  hide($content['field_tfa_forum_related_links']);
  hide($content['field_tfa_forum_opinions']);
  hide($content['field_moderator_name']);
  hide($content['field_moderator_title']);
  hide($content['field_moderator_bio']);
  hide($content['field_moderator_external_link']);
  hide($content['field_tfa_forum_downloads']);
  hide($content['comments']);
  hide($content['links']);
?>
<div class="container">
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="content-header">
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php else: ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <h3><?php print t('Introduction'); ?></h3>
    <?php print render($content['body']); ?>
    </div>
    <div class="content-main">
      <div class="content-opinion"<?php print $content_attributes; ?>>
        <div id="opinion-content">
          <?php print $opinion_content; ?>
        </div>
      </div>

      <div class="content-sidebar">
        <div class="forum-opinion-links forum-block">
          <h3><?php print t('Opinions'); ?></h3>
          <?php print $opinion_links; ?>
        </div>
        <h3><?php print t('Moderator'); ?></h3>
        <div class="forum-moderator forum-block">
          <?php print render($content['field_moderator_image']); ?>
          <div class="moderator-info">
            <span class="moderator-name">
              <?php print render($content['field_moderator_name']); ?>
            </span>
            <span class="moderator-title">
              <?php print render($content['field_moderator_title']); ?>
            </span>
          </div>
          <span class="moderator-bio">
            <?php print render($content['field_moderator_bio']); ?>
          </span>
          <div class="moderator-more">
            <?php print render($content['field_moderator_external_link']); ?>
          </div>
        </div>
        <div class="forum-related-links forum-block">
          <h3><?php print t('Related Links'); ?></h3>
          <?php print $related_links; ?>
        </div>
        <div class="forum-downloads forum-block">
          <h3><?php print t('Downloads'); ?></h3>
          <?php print render($content['field_tfa_forum_downloads']); ?>
        </div>
        <div class="forum-share-links forum-block">
          <h3><?php print t('Share'); ?></h3>
          <div class="block-sharethis">
            <?php print $share_links; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
