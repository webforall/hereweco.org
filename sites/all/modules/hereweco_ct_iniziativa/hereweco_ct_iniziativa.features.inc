<?php
/**
 * @file
 * hereweco_ct_iniziativa.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hereweco_ct_iniziativa_node_info() {
  $items = array(
    'iniziativa' => array(
      'name' => t('Iniziativa'),
      'base' => 'node_content',
      'description' => t('Le iniziative di hereweco'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'help' => '',
    ),
  );
  return $items;
}
