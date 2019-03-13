<?php

$view = new view();
$view->name = 'featured_audiovideo';
$view->description = '';
$view->tag = 'الرئيسية';
$view->base_table = 'node';
$view->human_name = 'مادة مختارة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مواد مرئية مختارة';
$handler->display->display_options['css_class'] = 'row';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'video_item';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* الترويسة: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
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
$handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'va_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* الحقل: المحتوى: رمز الفيديو اليوتيوب */
$handler->display->display_options['fields']['field_yt_video_id']['id'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['field'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['label'] = '';
$handler->display->display_options['fields']['field_yt_video_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['alter']['text'] = '<a class="thumb_link" href="[path]">
<img alt="[title]" class="circle_thumb responsive" src="http://img.youtube.com/vi/[field_yt_video_id]/hqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['empty'] = '<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="circle_thumb" src="http://www.hamzaabufaris.ly/sites/all/themes/bootstrap/Tanasuh/img/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'video_title';
$handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_category']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_category']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['field_category']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'posted';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
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
  'videoaudio' => 'videoaudio',
);
/* Filter criterion: المحتوى: مقال الشهر ؟ (field_featured) */
$handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
$handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['value'] = array(
  1 => '1',
);
/* Filter criterion: المحتوى: رمز الفيديو اليوتيوب (field_yt_video_id) */
$handler->display->display_options['filters']['field_yt_video_id_value']['id'] = 'field_yt_video_id_value';
$handler->display->display_options['filters']['field_yt_video_id_value']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['filters']['field_yt_video_id_value']['field'] = 'field_yt_video_id_value';
$handler->display->display_options['filters']['field_yt_video_id_value']['operator'] = 'not empty';

/* Display: wrap */
$handler = $view->new_display('block', 'wrap', 'wrap');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* الحقل: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: المحتوى: العنوان */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
$handler->display->display_options['block_description'] = 'مواد مرئية مختارة';

/* Display: featured */
$handler = $view->new_display('attachment', 'featured', 'featured');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-sm-5';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'featured_video';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_category_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'va_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* الحقل: المحتوى: رمز الفيديو اليوتيوب */
$handler->display->display_options['fields']['field_yt_video_id']['id'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['field'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['label'] = '';
$handler->display->display_options['fields']['field_yt_video_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['alter']['text'] = '<a class="thumb_link" href="[path]">
<img alt="[title]" class="circle_thumb responsive" src="http://img.youtube.com/vi/[field_yt_video_id]/hqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['empty'] = '<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="circle_thumb" src="http://www.hamzaabufaris.ly/sites/all/themes/bootstrap/Tanasuh/img/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'video_title';
$handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_category']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_category']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['field_category']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'posted';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['displays'] = array(
  'wrap' => 'wrap',
  'default' => 0,
);

/* Display: list */
$handler = $view->new_display('attachment', 'list', 'list');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-sm-7';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '1';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_category_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'va_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
<img alt="[title_1]" class="circle_thumb" src="http://www.hamzaabufaris.ly/sites/all/themes/bootstrap/Tanasuh/img/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'video_title';
$handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_category']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_category']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['field_category']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'posted';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['displays'] = array(
  'wrap' => 'wrap',
  'default' => 0,
);
$translatables['featured_audiovideo'] = array(
  t('Master'),
  t('مواد مرئية مختارة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term from field_category'),
  t('.'),
  t('<a class="thumb_link" href="[path]">
<img alt="[title]" class="circle_thumb responsive" src="http://img.youtube.com/vi/[field_yt_video_id]/hqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>'),
  t('<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="circle_thumb" src="http://www.hamzaabufaris.ly/sites/all/themes/bootstrap/Tanasuh/img/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>'),
  t('في قسم'),
  t('wrap'),
  t('featured'),
  t('list'),
  t('<a class="thumb_link" href="[path]">
<img alt="[title]" class="circle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>'),
);


?>