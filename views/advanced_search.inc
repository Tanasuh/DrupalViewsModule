<?php

$view = new view();
$view->name = 'advanced_search';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'search_api_index_article_search';
$view->human_name = 'بحث متقدم';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'بحث متقدم';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'بحث';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'ترتيب حسب';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'تصاعدي';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'تنازلي';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* الحقل: Indexed العقدة: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'search_api_index_article_search';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_entity'] = 1;
/* الحقل: Indexed العقدة: تاريخ الإنشاء */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'search_api_index_article_search';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'التاريخ';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
$handler->display->display_options['fields']['created']['link_to_entity'] = 0;
/* الحقل: Indexed العقدة: The main body text */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'search_api_index_article_search';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* الحقل: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<p style="padding-bottom: 50px;">&nbsp;</p>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: بحث: Relevance */
$handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_article_search';
$handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
$handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
/* Filter criterion: بحث: Fulltext search */
$handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_article_search';
$handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
$handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Indexed العقدة: نوع المحتوى */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'search_api_index_article_search';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'videoaudio' => 'videoaudio',
  'rdocument' => 'rdocument',
  'series' => 'series',
  'fatwa' => 'fatwa',
  'abook' => 'abook',
  'article' => 'article',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'search-page';
$translatables['advanced_search'] = array(
  t('Master'),
  t('بحث متقدم'),
  t('more'),
  t('بحث'),
  t('Reset'),
  t('ترتيب حسب'),
  t('تصاعدي'),
  t('تنازلي'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« الأولى'),
  t('‹ السابقة'),
  t('التالية ›'),
  t('الأخيرة »'),
  t('التاريخ'),
  t('<p style="padding-bottom: 50px;">&nbsp;</p>'),
  t('Page'),
);


?>