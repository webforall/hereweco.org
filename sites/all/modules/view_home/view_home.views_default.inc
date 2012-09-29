<?php
/**
 * @file
 * view_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'fluid_grid';
  $handler->display->display_options['style_options']['items_width'] = '200';
  $handler->display->display_options['style_options']['box_shadow'] = '0';
  $handler->display->display_options['style_options']['border_radius'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenuto: Link Facebook */
  $handler->display->display_options['fields']['field_link_facebook']['id'] = 'field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['table'] = 'field_data_field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['field'] = 'field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_link_facebook']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Link Twitter */
  $handler->display->display_options['fields']['field_link_twitter']['id'] = 'field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['table'] = 'field_data_field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['field'] = 'field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_link_twitter']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Sito web */
  $handler->display->display_options['fields']['field_sito_web']['id'] = 'field_sito_web';
  $handler->display->display_options['fields']['field_sito_web']['table'] = 'field_data_field_sito_web';
  $handler->display->display_options['fields']['field_sito_web']['field'] = 'field_sito_web';
  $handler->display->display_options['fields']['field_sito_web']['label'] = '';
  $handler->display->display_options['fields']['field_sito_web']['element_label_colon'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iniziativa' => 'iniziativa',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'home';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Home-i';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['home'] = array(
    t('Master'),
    t('Home'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Page'),
  );
  $export['home'] = $view;

  return $export;
}
