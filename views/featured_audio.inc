<?php

$view = new view();
$view->name = 'featured_audio';
$view->description = '';
$view->tag = 'الرئيسية';
$view->base_table = 'node';
$view->human_name = 'صوتيات مختارة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'صوتيات مختارة';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'aodio_row';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* الترويسة: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '  <span id="timeleft_f">00:00:00</span>
  <audio controls preload="metadata" id="audio-player_f">
    <source src="">
  </audio>

';
$handler->display->display_options['header']['area']['format'] = 'php_code';
$handler->display->display_options['header']['area']['tokenize'] = TRUE;
/* الحقل: المحتوى: الملف الصوتي */
$handler->display->display_options['fields']['field_audio_file']['id'] = 'field_audio_file';
$handler->display->display_options['fields']['field_audio_file']['table'] = 'field_data_field_audio_file';
$handler->display->display_options['fields']['field_audio_file']['field'] = 'field_audio_file';
$handler->display->display_options['fields']['field_audio_file']['label'] = '';
$handler->display->display_options['fields']['field_audio_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_audio_file']['alter']['text'] = '<a class="audio_link"  id="[field_audio_file]"></a>
';
$handler->display->display_options['fields']['field_audio_file']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_audio_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_audio_file']['type'] = 'file_url_plain';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'audio_title_f';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
/* Filter criterion: المحتوى: رمز الفيديو اليوتيوب (field_yt_video_id) */
$handler->display->display_options['filters']['field_yt_video_id_value']['id'] = 'field_yt_video_id_value';
$handler->display->display_options['filters']['field_yt_video_id_value']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['filters']['field_yt_video_id_value']['field'] = 'field_yt_video_id_value';
$handler->display->display_options['filters']['field_yt_video_id_value']['operator'] = 'empty';
/* Filter criterion: المحتوى: مقال الشهر ؟ (field_featured) */
$handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
$handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['value'] = array(
  1 => '1',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$translatables['featured_audio'] = array(
  t('Master'),
  t('صوتيات مختارة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('  <span id="timeleft_f">00:00:00</span>
  <audio controls preload="metadata" id="audio-player_f">
    <source src="">
  </audio>

'),
  t('<a class="audio_link"  id="[field_audio_file]"></a>
'),
  t('Block'),
);


?>