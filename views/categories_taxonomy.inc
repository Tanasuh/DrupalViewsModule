<?php

$view = new view();
$view->name = 'categories_taxonomy';
$view->description = '';
$view->tag = 'محتوى القسم';
$view->base_table = 'node';
$view->human_name = 'محتوى القسم';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'محتوى الأقسام';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأول';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابق';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالي ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخير »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '0';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['clear_columns'] = FALSE;
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '12';
$handler->display->display_options['style_options']['columns_md'] = '4';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* الحقل: المحتوى: رمز الفيديو اليوتيوب */
$handler->display->display_options['fields']['field_yt_video_id']['id'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['field'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['label'] = '';
$handler->display->display_options['fields']['field_yt_video_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['alter']['text'] = '<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="circle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'video_title';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'منذ';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['created']['element_wrapper_class'] = 'posted';
$handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم ';
$handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'categ';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: تعريف بالفيديو */
$handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
$handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video_description';
$handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
$handler->display->display_options['fields']['field_video_description']['label'] = '';
$handler->display->display_options['fields']['field_video_description']['element_type'] = 'p';
$handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_video_description']['element_default_classes'] = FALSE;
/* Sort criterion: المحتوى: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Contextual filter: المحتوى: النوع */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_action'] = 'default';
$handler->display->display_options['arguments']['type']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '0';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
/* Contextual filter: المحتوى: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1 - %2';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
/* Contextual filter: المحتوى: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
/* Filter criterion: المحتوى: منشور */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: محتوى الأقسام */
$handler = $view->new_display('page', 'محتوى الأقسام', 'video_item_view_for_field');
$handler->display->display_options['path'] = 'category/%/%';
$translatables['categories_taxonomy'] = array(
  t('Master'),
  t('محتوى الأقسام'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« الأول'),
  t('‹ السابق'),
  t('التالي ›'),
  t('الأخير »'),
  t('<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="circle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
</a>'),
  t('منذ'),
  t('في قسم '),
  t('الكل'),
  t('%1 - %2'),
);


?>