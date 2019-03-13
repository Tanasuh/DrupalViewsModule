<?php

$view = new view();
$view->name = 'video_cat_items';
$view->description = '';
$view->tag = 'المكتبة';
$view->base_table = 'node';
$view->human_name = ' مكون صفحة المكتبة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مكون صفحة السلسلة';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'video_item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  <img alt="[title]" class="circle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['empty'] = '<a class="thumb_link" href="[path]">
  <img alt="[title_1]" class="circle_thumb" src="/sites/all/themes/tanasuh/cust/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>';
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
/* الحقل: الوثيقة: Depth */
$handler->display->display_options['fields']['depth']['id'] = 'depth';
$handler->display->display_options['fields']['depth']['table'] = 'book_menu_links';
$handler->display->display_options['fields']['depth']['field'] = 'depth';
$handler->display->display_options['fields']['depth']['label'] = '';
$handler->display->display_options['fields']['depth']['exclude'] = TRUE;
$handler->display->display_options['fields']['depth']['element_label_colon'] = FALSE;
/* Sort criterion: المحتوى: العنوان */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['relationship'] = 'bid';
/* Contextual filter: المحتوى: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
  'videoaudio' => 'videoaudio',
);
/* Filter criterion: الوثيقة: Depth */
$handler->display->display_options['filters']['depth']['id'] = 'depth';
$handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
$handler->display->display_options['filters']['depth']['field'] = 'depth';
$handler->display->display_options['filters']['depth']['value']['value'] = '0';
$handler->display->display_options['filters']['depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['depth']['expose']['operator_id'] = 'depth_op';
$handler->display->display_options['filters']['depth']['expose']['label'] = 'Depth';
$handler->display->display_options['filters']['depth']['expose']['operator'] = 'depth_op';
$handler->display->display_options['filters']['depth']['expose']['identifier'] = 'depth';
$handler->display->display_options['filters']['depth']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);

/* Display: مكون صفحة الفيديو */
$handler = $view->new_display('page', 'مكون صفحة الفيديو', 'video_item_view_for_field');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'مكون صفحة الفيديو';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'videoaudio' => 'videoaudio',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Global: PHP */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['group'] = 1;
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '// if($row->depth) { return TRUE; } else { return FALSE; }
return FALSE;';
$handler->display->display_options['path'] = 's';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'video_item';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$translatables['video_cat_items'] = array(
  t('Master'),
  t('مكون صفحة السلسلة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<a class="thumb_link" href="[path]">
  <img alt="[title]" class="circle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>'),
  t('<a class="thumb_link" href="[path]">
  <img alt="[title_1]" class="circle_thumb" src="/sites/all/themes/tanasuh/cust/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>'),
  t('منذ'),
  t('.'),
  t(','),
  t('الكل'),
  t('Depth'),
  t('مكون صفحة الفيديو'),
  t('Block'),
);

?>