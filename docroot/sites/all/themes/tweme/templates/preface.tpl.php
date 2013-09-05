<?php

/**
 * @file
 * Default theme implementation to display a preface for the current page.
 */

//print $breadcrumb;
print render($help);
print render($tabs);
if ($actions) {
  print '<ul class="action-links">' . render($actions) . '</ul>';
}
