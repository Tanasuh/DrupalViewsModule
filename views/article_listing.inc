<?php

$view = new view();
$view->name = 'article_listing';
$view->description = '';
$view->tag = 'مقالات';
$view->base_table = 'node';
$view->human_name = 'مقالات';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مقالات';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'فرز';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '200';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '2';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['clear_columns'] = FALSE;
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '6';
$handler->display->display_options['style_options']['columns_md'] = '6';
$handler->display->display_options['style_options']['columns_lg'] = '6';
$handler->display->display_options['row_plugin'] = 'fields';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'article_title';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'تاريخ النشر';
$handler->display->display_options['fields']['created']['date_format'] = 'e_short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
/* الحقل: المحتوى: مختصر المقال */
$handler->display->display_options['fields']['field_front_page_text']['id'] = 'field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['table'] = 'field_data_field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['field'] = 'field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['label'] = '';
$handler->display->display_options['fields']['field_front_page_text']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['field_front_page_text']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_front_page_text']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: رابط */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read_more';
$handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'تكملة';
/* Sort criterion: المحتوى: تاريخ المقال (field_artical_publish_date) */
$handler->display->display_options['sorts']['field_artical_publish_date_value']['id'] = 'field_artical_publish_date_value';
$handler->display->display_options['sorts']['field_artical_publish_date_value']['table'] = 'field_data_field_artical_publish_date';
$handler->display->display_options['sorts']['field_artical_publish_date_value']['field'] = 'field_artical_publish_date_value';
$handler->display->display_options['sorts']['field_artical_publish_date_value']['order'] = 'DESC';
/* Contextual filter: المحتوى: Created year + month */
$handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
$handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'articles';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'مقالات';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: الصندوق */
$handler = $view->new_display('block', 'الصندوق', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'الأرشيف';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: المحتوى: Created year + month */
$handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
$handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
$handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
$handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
$handler->display->display_options['arguments']['created_year_month']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
$translatables['article_listing'] = array(
  t('Master'),
  t('مقالات'),
  t('more'),
  t('فرز'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« الأولى'),
  t('‹ السابقة'),
  t('التالية ›'),
  t('الأخيرة »'),
  t('تاريخ النشر'),
  t('تكملة'),
  t('الكل'),
  t('Page'),
  t('الصندوق'),
  t('الأرشيف'),
  t('%1'),
);


?>