<?php

$view = new view();
$view->name = 'unpublished_fatwas';
$view->description = '';
$view->tag = 'admin';
$view->base_table = 'node';
$view->human_name = 'إدارة الفتاوي';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'إدارة الفتاوى';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer nodes';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'status',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_email' => 'title',
  'status' => 'status',
  'field_featured_fatwa' => 'field_featured_fatwa',
  'field_user_question' => 'field_user_question',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br>',
    'empty_column' => 0,
  ),
  'field_email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_featured_fatwa' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_user_question' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => 'views-align-center',
    'separator' => '<br>',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_field_submittion_id_target_id']['id'] = 'field_field_submittion_id_target_id';
$handler->display->display_options['relationships']['field_field_submittion_id_target_id']['table'] = 'field_data_field_field_submittion_id';
$handler->display->display_options['relationships']['field_field_submittion_id_target_id']['field'] = 'field_field_submittion_id_target_id';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* الحقل: Entityform Submission: البريد الإلكتروني */
$handler->display->display_options['fields']['field_email']['id'] = 'field_email';
$handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
$handler->display->display_options['fields']['field_email']['field'] = 'field_email';
$handler->display->display_options['fields']['field_email']['relationship'] = 'field_field_submittion_id_target_id';
/* الحقل: المحتوى: منشور */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'منشور ؟';
$handler->display->display_options['fields']['status']['exclude'] = TRUE;
$handler->display->display_options['fields']['status']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* الحقل: المحتوى: فتوى مختارة ؟ */
$handler->display->display_options['fields']['field_featured_fatwa']['id'] = 'field_featured_fatwa';
$handler->display->display_options['fields']['field_featured_fatwa']['table'] = 'field_data_field_featured_fatwa';
$handler->display->display_options['fields']['field_featured_fatwa']['field'] = 'field_featured_fatwa';
/* الحقل: Entityform Submission: السؤال */
$handler->display->display_options['fields']['field_user_question']['id'] = 'field_user_question';
$handler->display->display_options['fields']['field_user_question']['table'] = 'field_data_field_user_question';
$handler->display->display_options['fields']['field_user_question']['field'] = 'field_user_question';
$handler->display->display_options['fields']['field_user_question']['relationship'] = 'field_field_submittion_id_target_id';
$handler->display->display_options['fields']['field_user_question']['label'] = '';
$handler->display->display_options['fields']['field_user_question']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['field_user_question']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_user_question']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'تحرير';
/* الحقل: المحتوى: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Sort criterion: المحتوى: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
/* Sort criterion: المحتوى: منشور */
$handler->display->display_options['sorts']['status']['id'] = 'status';
$handler->display->display_options['sorts']['status']['table'] = 'node';
$handler->display->display_options['sorts']['status']['field'] = 'status';
$handler->display->display_options['sorts']['status']['exposed'] = TRUE;
$handler->display->display_options['sorts']['status']['expose']['label'] = 'Published';
/* Sort criterion: المحتوى: فتوى مختارة ؟ (field_featured_fatwa) */
$handler->display->display_options['sorts']['field_featured_fatwa_value']['id'] = 'field_featured_fatwa_value';
$handler->display->display_options['sorts']['field_featured_fatwa_value']['table'] = 'field_data_field_featured_fatwa';
$handler->display->display_options['sorts']['field_featured_fatwa_value']['field'] = 'field_featured_fatwa_value';
$handler->display->display_options['sorts']['field_featured_fatwa_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_featured_fatwa_value']['expose']['label'] = 'فتوى مختارة ؟';
/* Filter criterion: المحتوى: النوع */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'fatwa' => 'fatwa',
);
/* Filter criterion: Entityform Submission: البريد الإلكتروني (field_email) */
$handler->display->display_options['filters']['field_email_email']['id'] = 'field_email_email';
$handler->display->display_options['filters']['field_email_email']['table'] = 'field_data_field_email';
$handler->display->display_options['filters']['field_email_email']['field'] = 'field_email_email';
$handler->display->display_options['filters']['field_email_email']['relationship'] = 'field_field_submittion_id_target_id';
$handler->display->display_options['filters']['field_email_email']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_email_email']['expose']['operator_id'] = 'field_email_email_op';
$handler->display->display_options['filters']['field_email_email']['expose']['label'] = 'البريد الإلكتروني (field_email)';
$handler->display->display_options['filters']['field_email_email']['expose']['operator'] = 'field_email_email_op';
$handler->display->display_options['filters']['field_email_email']['expose']['identifier'] = 'field_email_email';
$handler->display->display_options['filters']['field_email_email']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/fatwaad';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'إدارة الفتاوى';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['unpublished_fatwas'] = array(
  t('Master'),
  t('إدارة الفتاوى'),
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
  t('Entityform Submission entity referenced from field_field_submittion_id'),
  t('العنوان'),
  t('البريد الإلكتروني'),
  t('منشور ؟'),
  t('فتوى مختارة ؟'),
  t('تحرير'),
  t('Post date'),
  t('Published'),
  t('البريد الإلكتروني (field_email)'),
  t('Page'),
);



?>