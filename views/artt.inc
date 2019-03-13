<?php

$view = new view();
$view->name = 'artt';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'artt';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'artt';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'created' => 'created',
  'field_fatwa_date' => 'field_fatwa_date',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'created';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_fatwa_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* التذييل: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
/* الحقل: Bulk operations: المحتوى */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_save_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'نشر المحتوى';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'e_short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
/* الحقل: المحتوى: تاريخ الإجابة */
$handler->display->display_options['fields']['field_fatwa_date']['id'] = 'field_fatwa_date';
$handler->display->display_options['fields']['field_fatwa_date']['table'] = 'field_data_field_fatwa_date';
$handler->display->display_options['fields']['field_fatwa_date']['field'] = 'field_fatwa_date';
$handler->display->display_options['fields']['field_fatwa_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_fatwa_date']['settings'] = array(
  'format_type' => 'e_short',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* الحقل: المحتوى: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Sort criterion: المحتوى: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
/* Filter criterion: المحتوى: تاريخ الإجابة (field_fatwa_date) */
$handler->display->display_options['filters']['field_fatwa_date_value']['id'] = 'field_fatwa_date_value';
$handler->display->display_options['filters']['field_fatwa_date_value']['table'] = 'field_data_field_fatwa_date';
$handler->display->display_options['filters']['field_fatwa_date_value']['field'] = 'field_fatwa_date_value';
$handler->display->display_options['filters']['field_fatwa_date_value']['operator'] = 'empty';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* الحقل: Bulk operations: المحتوى */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_save_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'نشر المحتوى';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'e_short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
/* الحقل: المحتوى: تاريخ المقال */
$handler->display->display_options['fields']['field_artical_publish_date']['id'] = 'field_artical_publish_date';
$handler->display->display_options['fields']['field_artical_publish_date']['table'] = 'field_data_field_artical_publish_date';
$handler->display->display_options['fields']['field_artical_publish_date']['field'] = 'field_artical_publish_date';
$handler->display->display_options['fields']['field_artical_publish_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_artical_publish_date']['settings'] = array(
  'format_type' => 'e_short',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* الحقل: المحتوى: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
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
$handler->display->display_options['path'] = 'admin/artt';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
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
  'fatwa' => 'fatwa',
);
/* Filter criterion: المحتوى: تاريخ الإجابة (field_fatwa_date) */
$handler->display->display_options['filters']['field_fatwa_date_value']['id'] = 'field_fatwa_date_value';
$handler->display->display_options['filters']['field_fatwa_date_value']['table'] = 'field_data_field_fatwa_date';
$handler->display->display_options['filters']['field_fatwa_date_value']['field'] = 'field_fatwa_date_value';
$handler->display->display_options['filters']['field_fatwa_date_value']['operator'] = 'empty';
$handler->display->display_options['path'] = 'admin/artt1';
$translatables['artt'] = array(
  t('Master'),
  t('artt'),
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
  t('التالية ›'),
  t('الأخيرة »'),
  t('Displaying @start - @end of @total'),
  t('المحتوى'),
  t('- Choose an operation -'),
  t('نشر المحتوى'),
  t('تاريخ الإجابة'),
  t('Edit link'),
  t('Page'),
  t('تاريخ المقال'),
);


?>