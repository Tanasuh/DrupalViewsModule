<?php

$view = new view();
$view->name = 'featured_fatwas';
$view->description = '';
$view->tag = 'الفتاوي';
$view->base_table = 'node';
$view->human_name = 'فتاوي مختارة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'فتاوى مختارة';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'featured_fatwas';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* التذييل: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = '<a  class="btn btn-primary question_btn" data-toggle="modal" data-target=".bs-example-modal-lg">أرسل سؤالاً</a>';
/* Relationship: المحتوى: قسم الفتوى (field_fatwa_categ) */
$handler->display->display_options['relationships']['field_fatwa_categ_tid']['id'] = 'field_fatwa_categ_tid';
$handler->display->display_options['relationships']['field_fatwa_categ_tid']['table'] = 'field_data_field_fatwa_categ';
$handler->display->display_options['relationships']['field_fatwa_categ_tid']['field'] = 'field_fatwa_categ_tid';
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_fatwa_categ_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'fatwa_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: قسم الفتوى */
$handler->display->display_options['fields']['field_fatwa_categ']['id'] = 'field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['table'] = 'field_data_field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['field'] = 'field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_fatwa_categ']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_fatwa_categ']['alter']['path'] = 'category/fatwa/[tid]';
$handler->display->display_options['fields']['field_fatwa_categ']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_fatwa_categ']['element_wrapper_class'] = 'fatwa_category';
$handler->display->display_options['fields']['field_fatwa_categ']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_fatwa_categ']['type'] = 'taxonomy_term_reference_plain';
/* الحقل: المحتوى: السؤال */
$handler->display->display_options['fields']['field_ftw_question']['id'] = 'field_ftw_question';
$handler->display->display_options['fields']['field_ftw_question']['table'] = 'field_data_field_ftw_question';
$handler->display->display_options['fields']['field_ftw_question']['field'] = 'field_ftw_question';
$handler->display->display_options['fields']['field_ftw_question']['label'] = '';
$handler->display->display_options['fields']['field_ftw_question']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['field_ftw_question']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_ftw_question']['element_type'] = 'p';
$handler->display->display_options['fields']['field_ftw_question']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ftw_question']['type'] = 'text_plain';
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
  'fatwa' => 'fatwa',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'فتاوى مختارة';
$translatables['featured_fatwas'] = array(
  t('Master'),
  t('فتاوى مختارة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<a  class="btn btn-primary question_btn" data-toggle="modal" data-target=".bs-example-modal-lg">أرسل سؤالاً</a>'),
  t('term from field_fatwa_categ'),
  t('.'),
  t('في قسم'),
  t('Block'),
);


?>