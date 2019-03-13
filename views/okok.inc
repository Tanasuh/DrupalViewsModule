<?php

$view = new view();
$view->name = 'okok';
$view->description = '';
$view->tag = 'صفحة السلاسل';
$view->base_table = 'node';
$view->human_name = 'صفحة السلاسل';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'السلاسل العلمية';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'القادمة ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '-1';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['clear_columns'] = FALSE;
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '4';
$handler->display->display_options['style_options']['columns_md'] = '4';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: الوثيقة: Top level book */
$handler->display->display_options['relationships']['bid']['id'] = 'bid';
$handler->display->display_options['relationships']['bid']['table'] = 'book';
$handler->display->display_options['relationships']['bid']['field'] = 'bid';
$handler->display->display_options['relationships']['bid']['label'] = 'Book';
$handler->display->display_options['relationships']['bid']['required'] = TRUE;
/* الحقل: المحتوى: صورة السلسلة */
$handler->display->display_options['fields']['field_series_thumb']['id'] = 'field_series_thumb';
$handler->display->display_options['fields']['field_series_thumb']['table'] = 'field_data_field_series_thumb';
$handler->display->display_options['fields']['field_series_thumb']['field'] = 'field_series_thumb';
$handler->display->display_options['fields']['field_series_thumb']['label'] = '';
$handler->display->display_options['fields']['field_series_thumb']['element_type'] = 'div';
$handler->display->display_options['fields']['field_series_thumb']['element_class'] = 'series_thumb';
$handler->display->display_options['fields']['field_series_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_series_thumb']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_series_thumb']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_series_thumb']['settings'] = array(
  'image_style' => 'series_thmb',
  'image_link' => 'content',
);
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'serie_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_type'] = 'div';
$handler->display->display_options['fields']['body']['element_class'] = 'series_desc';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
/* Sort criterion: المحتوى: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: المحتوى: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'bid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  'series' => 'series',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['path'] = 'series';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'سلاسل علمية';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['okok'] = array(
  t('Master'),
  t('السلاسل العلمية'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« الأولى'),
  t('‹ السابقة'),
  t('القادمة ›'),
  t('الأخيرة »'),
  t('Book'),
  t('All'),
  t('Page'),
);


?>