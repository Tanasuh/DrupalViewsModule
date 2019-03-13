<?php
$view = new view();
$view->name = 'fatawi_categories';
$view->description = '';
$view->tag = 'الفتاوي';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'أقسام الفتاوي';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'أقسام القسم';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '200';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'fatwa_cat_item';
$handler->display->display_options['style_options']['wrapper_class'] = 'fatawi-categories';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: مصطلح تصنيف: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['label'] = 'node';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* الحقل: مصطلح تصنيف: الاسم */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Sort criterion: مصطلح تصنيف: الاسم */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: مصطلح تصنيف: مفردة أم */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
/* Filter criterion: معجم الوسوم: الاسم الآلي */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'fatwa_category' => 'fatwa_category',
);

/* Display: Block main */
$handler = $view->new_display('block', 'Block main', 'block');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* الحقل: مصطلح تصنيف: الاسم */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'category/fatwa/[tid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: معجم الوسوم: الاسم الآلي */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'fatwa_category' => 'fatwa_category',
);
/* Filter criterion: مصطلح تصنيف: مفردة أم */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['value']['value'] = '0';

/* Display: block inside */
$handler = $view->new_display('block', 'block inside', 'block_1');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: مصطلح تصنيف: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['label'] = 'node';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: مصطلح تصنيف: مفردة أم */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'default';
$handler->display->display_options['arguments']['parent']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['parent']['title'] = 'أقسام %1';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['parent']['default_argument_options']['index'] = '2';
$handler->display->display_options['arguments']['parent']['default_argument_options']['use_alias'] = TRUE;
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$translatables['fatawi_categories'] = array(
  t('Master'),
  t('أقسام القسم'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('node'),
  t('الكل'),
  t('Block main'),
  t('.'),
  t('block inside'),
  t('All'),
  t('أقسام %1'),
);


?>