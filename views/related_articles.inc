<?php

$view = new view();
$view->name = 'related_articles';
$view->description = '';
$view->tag = 'مقالات';
$view->base_table = 'node';
$view->human_name = 'مقالات ذات صلة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مقاطع ذات صلة';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* No results behavior: Global: View area */
$handler->display->display_options['empty']['view']['id'] = 'view';
$handler->display->display_options['empty']['view']['table'] = 'views';
$handler->display->display_options['empty']['view']['field'] = 'view';
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '52';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h4';
$handler->display->display_options['fields']['title']['element_class'] = 'related_article_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'تاريخ:';
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['changed']['element_wrapper_class'] = 'related_article_date';
$handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'search_api_facetapi_DAY';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
/* Contextual filter: المحتوى: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['not'] = TRUE;
/* Contextual filter: المحتوى: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
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

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'مقالات ذات صلة';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: View area */
$handler->display->display_options['empty']['view']['id'] = 'view';
$handler->display->display_options['empty']['view']['table'] = 'views';
$handler->display->display_options['empty']['view']['field'] = 'view';
$handler->display->display_options['empty']['view']['empty'] = TRUE;
$handler->display->display_options['empty']['view']['view_to_insert'] = 'related_articles:block_1';
$handler->display->display_options['block_description'] = 'مقالات ذات صلة';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'مقالات أخرى';
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['block_description'] = 'مقالات أخرى';

/* Display: أحدث المقالات */
$handler = $view->new_display('block', 'أحدث المقالات', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'أحدث المقالات';
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: المحتوى: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['sorts']['changed']['granularity'] = 'day';
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['block_description'] = 'أحدث المقالات';
$translatables['related_articles'] = array(
  t('Master'),
  t('مقاطع ذات صلة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('تاريخ:'),
  t('All'),
  t('Block'),
  t('مقالات ذات صلة'),
  t('مقالات أخرى'),
  t('أحدث المقالات'),
);


?>