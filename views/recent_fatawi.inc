<?php

$view = new view();
$view->name = 'recent_fatawi';
$view->description = '';
$view->tag = 'الفتاوي';
$view->base_table = 'node';
$view->human_name = 'أحدث الفتاوي';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'فتاوى ذات صلة';
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'fatwa_title';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: قسم الفتوى */
$handler->display->display_options['fields']['field_fatwa_categ']['id'] = 'field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['table'] = 'field_data_field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['field'] = 'field_fatwa_categ';
$handler->display->display_options['fields']['field_fatwa_categ']['label'] = 'في القسم';
$handler->display->display_options['fields']['field_fatwa_categ']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_fatwa_categ']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_fatwa_categ']['alter']['path'] = 'category/fatwa/[tid]';
$handler->display->display_options['fields']['field_fatwa_categ']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_fatwa_categ']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_fatwa_categ']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_fatwa_categ']['type'] = 'taxonomy_term_reference_plain';
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'e_short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
/* الحقل: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="fatwas_info">
في قسم : [field_fatwa_categ] تاريخ النشـر : [created]
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

/* Display: الأحدث الخارجية */
$handler = $view->new_display('block', 'الأحدث الخارجية', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['block_description'] = 'أحدث الفتاوى';

/* Display: آخر مشاهدة الخارجية */
$handler = $view->new_display('block', 'آخر مشاهدة الخارجية', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'آخر الفتاوى المشاهدة';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: مشاهدة اليوم */
$handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
$handler->display->display_options['block_description'] = 'آخر الفتاوى المشاهدة';

/* Display: فتاوى ذات صلة */
$handler = $view->new_display('block', 'فتاوى ذات صلة', 'block_2');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: المحتوى: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
  'fatwa_category' => 'fatwa_category',
  'category' => 'category',
  'tags' => 'tags',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: المحتوى: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['block_description'] = 'فتاوى ذات صلة';

/* Display: آخر مشاهدة الداخلية */
$handler = $view->new_display('block', 'آخر مشاهدة الداخلية', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'آخر الفتاوي المشاهدة';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content statistics: مشاهدة اليوم */
$handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
$handler->display->display_options['block_description'] = 'آخر الفتاوي المشاهدة';
$translatables['recent_fatawi'] = array(
  t('Master'),
  t('فتاوى ذات صلة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term from field_fatwa_categ'),
  t('.'),
  t('في القسم'),
  t('<div class="fatwas_info">
في قسم : [field_fatwa_categ] تاريخ النشـر : [created]
</div>'),
  t('الأحدث الخارجية'),
  t('أحدث الفتاوى'),
  t('آخر مشاهدة الخارجية'),
  t('آخر الفتاوى المشاهدة'),
  t('All'),
  t('آخر مشاهدة الداخلية'),
  t('آخر الفتاوي المشاهدة'),
);



?>