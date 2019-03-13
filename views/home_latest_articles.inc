<?php

$view = new view();
$view->name = 'home_latest_articles';
$view->description = '';
$view->tag = 'الرئيسية';
$view->base_table = 'node';
$view->human_name = 'أحدث المقالات';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مقالات مختارة';
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
$handler->display->display_options['style_options']['wrapper_class'] = 'featured_articles';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'tid' => 'tid',
  'title' => 'title',
  'field_category' => 'field_category',
);
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: المحتوى: القسم (field_category) */
$handler->display->display_options['relationships']['field_category_tid']['id'] = 'field_category_tid';
$handler->display->display_options['relationships']['field_category_tid']['table'] = 'field_data_field_category';
$handler->display->display_options['relationships']['field_category_tid']['field'] = 'field_category_tid';
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_category_tid';
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
$handler->display->display_options['fields']['title']['element_class'] = 'article_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_category']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_category']['alter']['path'] = 'category/article/[tid]';
$handler->display->display_options['fields']['field_category']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'article_category';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
/* الحقل: المحتوى: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
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
/* Filter criterion: المحتوى: مرقّى إلى الصفحة الرئيسية */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'مقالات مختارة';
$translatables['home_latest_articles'] = array(
  t('Master'),
  t('مقالات مختارة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term from field_category'),
  t('.'),
  t('في قسم'),
  t('Block'),
);


?>