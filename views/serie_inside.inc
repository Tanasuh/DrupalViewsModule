<?php

$view = new view();
$view->name = 'serie_inside';
$view->description = '';
$view->tag = 'صفحة السلاسل';
$view->base_table = 'node';
$view->human_name = 'صفحة السلسلة';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'صفحة السلسلة';
$handler->display->display_options['css_class'] = 'row';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '-1';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '0';
$handler->display->display_options['style_options']['columns_md'] = '0';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Relationship: الوثيقة: Top level book */
$handler->display->display_options['relationships']['bid']['id'] = 'bid';
$handler->display->display_options['relationships']['bid']['table'] = 'book';
$handler->display->display_options['relationships']['bid']['field'] = 'bid';
$handler->display->display_options['relationships']['bid']['label'] = 'Book';
$handler->display->display_options['relationships']['bid']['required'] = TRUE;
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
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* الحقل: المحتوى: رمز الفيديو اليوتيوب */
$handler->display->display_options['fields']['field_yt_video_id']['id'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['table'] = 'field_data_field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['field'] = 'field_yt_video_id';
$handler->display->display_options['fields']['field_yt_video_id']['label'] = '';
$handler->display->display_options['fields']['field_yt_video_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_yt_video_id']['alter']['text'] = '<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="rectangle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
</a>';
$handler->display->display_options['fields']['field_yt_video_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_yt_video_id']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: العنوان */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'video_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* الحقل: المحتوى: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'منذ';
$handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['created']['element_wrapper_class'] = 'posted';
$handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* الحقل: المحتوى: القسم */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['label'] = 'في قسم';
$handler->display->display_options['fields']['field_category']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_category']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['field_category']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'categ';
$handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
/* الحقل: المحتوى: تعريف بالفيديو */
$handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
$handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video_description';
$handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
$handler->display->display_options['fields']['field_video_description']['label'] = '';
$handler->display->display_options['fields']['field_video_description']['alter']['text'] = '<div class="row">
    <div class="col-sm-4">
        <a class="thumb" href="[path]" title="%1">
            [field_yt_video_id]
            <span class="play_icon"></span>
        </a>
        <a class="show_content" href="[path]" title="%1" class="view_content">عرض المادة</a>
    </div>
    <div class="col-sm-8">
    <h3 class="title">[title]</h3>
    <div class="info">
        <span class="ex_created">أضيف قبل <span class="created">[created]</span></span> | 
        <span class="ex_category">في القسم <span class="category">[field_category]</span></span>
    </div>
    <p class="intro">[field_video_description]</p>
    </div>
</div>';
$handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_video_description']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['field_video_description']['element_default_classes'] = FALSE;
/* Sort criterion: الوثيقة: Hierarchy */
$handler->display->display_options['sorts']['p']['id'] = 'p';
$handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
$handler->display->display_options['sorts']['p']['field'] = 'p';
$handler->display->display_options['sorts']['p']['sort_within_level'] = 1;
/* Contextual filter: المحتوى: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'bid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'series/%';
$translatables['serie_inside'] = array(
  t('Master'),
  t('صفحة السلسلة'),
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
  t('Book'),
  t('term from field_category'),
  t('.'),
  t(','),
  t('<a class="thumb_link" href="[path]">
<img alt="[title_1]" class="rectangle_thumb" src="http://img.youtube.com/vi/[field_yt_video_id]/mqdefault.jpg">
</a>'),
  t('منذ'),
  t('في قسم'),
  t('<div class="row">
    <div class="col-sm-4">
        <a class="thumb" href="[path]" title="%1">
            [field_yt_video_id]
            <span class="play_icon"></span>
        </a>
        <a class="show_content" href="[path]" title="%1" class="view_content">عرض المادة</a>
    </div>
    <div class="col-sm-8">
    <h3 class="title">[title]</h3>
    <div class="info">
        <span class="ex_created">أضيف قبل <span class="created">[created]</span></span> | 
        <span class="ex_category">في القسم <span class="category">[field_category]</span></span>
    </div>
    <p class="intro">[field_video_description]</p>
    </div>
</div>'),
  t('All'),
  t('Page'),
);


?>