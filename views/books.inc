<?php

$view = new view();
$view->name = 'books';
$view->description = '';
$view->tag = 'المؤلفات';
$view->base_table = 'node';
$view->human_name = 'المؤلفات';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'المؤلفات';
$handler->display->display_options['use_more'] = TRUE;
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
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '2';
$handler->display->display_options['style_options']['columns_vertical'] = '6';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '6';
$handler->display->display_options['style_options']['columns_md'] = '6';
$handler->display->display_options['style_options']['columns_lg'] = '6';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* الحقل: المحتوى: صورة الكتاب */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'col-sm-4 book4c';
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'book_theme',
  'image_link' => '',
);
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'book_title';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: الناشر */
$handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
$handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
$handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
$handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publisher']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_publisher']['element_wrapper_class'] = 'publisher';
$handler->display->display_options['fields']['field_publisher']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: السنة */
$handler->display->display_options['fields']['field_publish_year']['id'] = 'field_publish_year';
$handler->display->display_options['fields']['field_publish_year']['table'] = 'field_data_field_publish_year';
$handler->display->display_options['fields']['field_publish_year']['field'] = 'field_publish_year';
$handler->display->display_options['fields']['field_publish_year']['label'] = 'سنة النشر';
$handler->display->display_options['fields']['field_publish_year']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publish_year']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_publish_year']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_publish_year']['element_wrapper_class'] = 'publish_year';
$handler->display->display_options['fields']['field_publish_year']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: تنزيل الكتاب */
$handler->display->display_options['fields']['field_download_book']['id'] = 'field_download_book';
$handler->display->display_options['fields']['field_download_book']['table'] = 'field_data_field_download_book';
$handler->display->display_options['fields']['field_download_book']['field'] = 'field_download_book';
$handler->display->display_options['fields']['field_download_book']['label'] = '';
$handler->display->display_options['fields']['field_download_book']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_download_book']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_download_book']['alter']['text'] = '<a href="[field_download_book]">تحميل</a>';
$handler->display->display_options['fields']['field_download_book']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_download_book']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_download_book']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_download_book']['element_wrapper_class'] = 'download';
$handler->display->display_options['fields']['field_download_book']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_download_book']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_download_book']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_download_book']['type'] = 'file_url_plain';
/* الحقل: المحتوى: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<div class="clear"></div>
[body-value]';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'pintro';
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
/* الحقل: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-8 book8c">
<h3>[title]</h3>
<div class="book_info">
<div class="publisher"><span class=\'lable\'>الناشر : &nbsp;</span><span>[field_publisher]</span></div>
<div class="publish_year"><span class=\'lable\'>سنة النشر : &nbsp;</span><span>[field_publish_year]</span></div>
<div class="download"><span>[field_download_book]</span></div>
</div>
<p>[body]</p>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: المحتوى: العنوان */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
  'abook' => 'abook',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'books';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'مؤلفات';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['books'] = array(
  t('Master'),
  t('المؤلفات'),
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
  t('الناشر'),
  t('سنة النشر'),
  t('<a href="[field_download_book]">تحميل</a>'),
  t('<div class="clear"></div>
[body-value]'),
  t('<div class="col-sm-8 book8c">
<h3>[title]</h3>
<div class="book_info">
<div class="publisher"><span class=\'lable\'>الناشر : &nbsp;</span><span>[field_publisher]</span></div>
<div class="publish_year"><span class=\'lable\'>سنة النشر : &nbsp;</span><span>[field_publish_year]</span></div>
<div class="download"><span>[field_download_book]</span></div>
</div>
<p>[body]</p>
</div>'),
  t('Page'),
);


?>