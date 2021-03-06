<?php

$view = new view();
$view->name = 'related_posts';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'مقاطع ذات صلة';
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
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '0';
$handler->display->display_options['style_options']['columns_vertical'] = '3';
$handler->display->display_options['style_options']['columns_xs'] = '6';
$handler->display->display_options['style_options']['columns_sm'] = '4';
$handler->display->display_options['style_options']['columns_md'] = '3';
$handler->display->display_options['style_options']['columns_lg'] = '3';
$handler->display->display_options['row_plugin'] = 'fields';
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
/* الحقل: المحتوى: رمز الفيديو اليوتيوب */
$handler->display->display_options['fields']['field_yt_video_id']['id'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['field'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['label'] = '';
$handler->display->display_options['fields']['field_yt_video_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['alter']['text'] = '<a href="[path]" class="black_background">
  <img width="235" class="responsive" src="http://img.youtube.com/vi/[field_yt_video_id-value]/mqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['empty'] = '<a class="thumb_link" href="[path]">
<img width="235" alt="[title_1]" class="circle_thumb responsive" src="/sites/all/themes/tanasuh/cust/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['type'] = 'text_plain';
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'p';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
/* Contextual filter: المحتوى: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['exception']['title'] = 'الكل';
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
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
/* Filter criterion: المحتوى: النوع */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'videoaudio' => 'videoaudio',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'مقاطع ذات صلة';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: View area */
$handler->display->display_options['empty']['view']['id'] = 'view';
$handler->display->display_options['empty']['view']['table'] = 'views';
$handler->display->display_options['empty']['view']['field'] = 'view';
$handler->display->display_options['empty']['view']['empty'] = TRUE;
$handler->display->display_options['empty']['view']['view_to_insert'] = 'related_posts:block_1';
$handler->display->display_options['block_description'] = 'مقاطع ذات صلة';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'مقاطع أخرى';
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['block_description'] = 'مقاطع أخرى';
$translatables['related_posts'] = array(
  t('Master'),
  t('مقاطع ذات صلة'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<a href="[path]" class="black_background">
  <img width="235" class="responsive" src="http://img.youtube.com/vi/[field_yt_video_id-value]/mqdefault.jpg">
  <div class="thumb_b_bg">
     <span class="video_icon"></span>
  </div>
</a>'),
  t('<a class="thumb_link" href="[path]">
<img width="235" alt="[title_1]" class="circle_thumb responsive" src="/sites/all/themes/tanasuh/cust/audio.jpg">
  <div class="thumb_b_bg">
     <span class="audio_icon"></span>
  </div>
</a>'),
  t('الكل'),
  t('Block'),
  t('مقاطع أخرى'),
);


?>