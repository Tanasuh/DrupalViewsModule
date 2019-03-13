<?php

$view = new view();
$view->name = 'manshet';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'المنشت المقال';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'منشت المقال';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: المنشت */
$handler->display->display_options['fields']['field_manshet']['id'] = 'field_manshet';
$handler->display->display_options['fields']['field_manshet']['table'] = 'field_data_field_manshet';
$handler->display->display_options['fields']['field_manshet']['field'] = 'field_manshet';
$handler->display->display_options['fields']['field_manshet']['label'] = '';
$handler->display->display_options['fields']['field_manshet']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_manshet']['alter']['text'] = '<div class="mansh">
<div class="qoute"> <p> [field_manshet] </p></div> </div>

<div class=" qoute-link"> <p>من مقال: [title]</p> </div>';
$handler->display->display_options['fields']['field_manshet']['element_label_colon'] = FALSE;
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
/* Filter criterion: المحتوى: منشور */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: المحتوى: النوع */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
);
/* Filter criterion: المحتوى: المنشت (field_manshet) */
$handler->display->display_options['filters']['field_manshet_value']['id'] = 'field_manshet_value';
$handler->display->display_options['filters']['field_manshet_value']['table'] = 'field_data_field_manshet';
$handler->display->display_options['filters']['field_manshet_value']['field'] = 'field_manshet_value';
$handler->display->display_options['filters']['field_manshet_value']['operator'] = 'not empty';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$translatables['manshet'] = array(
  t('Master'),
  t('منشت المقال'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<div class="mansh">
<div class="qoute"> <p> [field_manshet] </p></div> </div>

<div class=" qoute-link"> <p>من مقال: [title]</p> </div>'),
  t('Block'),
);


?>