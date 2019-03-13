<?php

$view = new view();
$view->name = 'research';
$view->description = '';
$view->tag = 'بحوث';
$view->base_table = 'node';
$view->human_name = 'بحوث';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'بحوث علمية مختارة';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'rdocument_wrap';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* الحقل: المحتوى: ملف البحث */
$handler->display->display_options['fields']['field_document_file_1']['id'] = 'field_document_file_1';
$handler->display->display_options['fields']['field_document_file_1']['table'] = 'field_data_field_document_file';
$handler->display->display_options['fields']['field_document_file_1']['field'] = 'field_document_file';
$handler->display->display_options['fields']['field_document_file_1']['label'] = '';
$handler->display->display_options['fields']['field_document_file_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_document_file_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_document_file_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_document_file_1']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_document_file_1']['delta_offset'] = '0';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[field_document_file_1]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'rdocument_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* الحقل: المحتوى: مقدم إلى */
$handler->display->display_options['fields']['field_dedication']['id'] = 'field_dedication';
$handler->display->display_options['fields']['field_dedication']['table'] = 'field_data_field_dedication';
$handler->display->display_options['fields']['field_dedication']['field'] = 'field_dedication';
$handler->display->display_options['fields']['field_dedication']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_dedication']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_dedication']['element_wrapper_class'] = 'rdocument_presented';
$handler->display->display_options['fields']['field_dedication']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: ملف البحث */
$handler->display->display_options['fields']['field_document_file']['id'] = 'field_document_file';
$handler->display->display_options['fields']['field_document_file']['table'] = 'field_data_field_document_file';
$handler->display->display_options['fields']['field_document_file']['field'] = 'field_document_file';
$handler->display->display_options['fields']['field_document_file']['label'] = '';
$handler->display->display_options['fields']['field_document_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_document_file']['alter']['text'] = '<div class="row rdocument-wrap-row"><div class="col-sm-9 research-title">[title]
<p>مقدم إلى: [field_dedication] </p></div>
<div class="col-sm-3 research-file"><a href="[field_document_file]">تحميل PDF</a></div></div>';
$handler->display->display_options['fields']['field_document_file']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_document_file']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_document_file']['element_wrapper_class'] = 'rdocument_Download';
$handler->display->display_options['fields']['field_document_file']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_document_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_document_file']['type'] = 'file_url_plain';
$handler->display->display_options['fields']['field_document_file']['delta_offset'] = '0';
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
  'rdocument' => 'rdocument',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'sd';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'بحوث علمية';
$handler->display->display_options['menu']['name'] = 'main-menu';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['block_description'] = 'بحوث علمية مختارة';
$translatables['research'] = array(
  t('Master'),
  t('بحوث علمية مختارة'),
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
  t('مقدم إلى'),
  t('<div class="row rdocument-wrap-row"><div class="col-sm-9 research-title">[title]
<p>مقدم إلى: [field_dedication] </p></div>
<div class="col-sm-3 research-file"><a href="[field_document_file]">تحميل PDF</a></div></div>'),
  t('Page'),
  t('Block'),
);


?>