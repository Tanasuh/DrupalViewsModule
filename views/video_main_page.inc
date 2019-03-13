<?php

$view = new view();
$view->name = 'video_main_page';
$view->description = '';
$view->tag = 'المكتبة';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'المكتبة المرئية والصوتية';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'المكتبة المرئية والصوتية';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '3';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '4';
$handler->display->display_options['style_options']['columns_md'] = '4';
$handler->display->display_options['style_options']['columns_lg'] = '4';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: مصطلح تصنيف: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['label'] = 'node';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* الحقل: مصطلح تصنيف: معرف الوسم */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* الحقل: مصطلح تصنيف: الاسم */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'cat_title';
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
/* الحقل: Global: عرض */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view']['empty'] = 'لا توجد أي مادة في هذا القسم';
$handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['view']['view'] = 'video_cat_items';
$handler->display->display_options['fields']['view']['display'] = 'video_item_view_for_field';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
/* الحقل: مصطلح تصنيف: الاسم */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['text'] = '+';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = 'category/videoaudio/[tid]';
$handler->display->display_options['fields']['name_1']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['alt'] = 'المزيد';
$handler->display->display_options['fields']['name_1']['alter']['link_class'] = 'readmore_icon';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
/* الحقل: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="readmore_bg">[name_1]</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: COUNT(مصطلح تصنيف: الاسم) */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
$handler->display->display_options['sorts']['name']['group_type'] = 'count';
$handler->display->display_options['sorts']['name']['order'] = 'DESC';
/* Filter criterion: معجم الوسوم: الاسم الآلي */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'category' => 'category',
);
/* Filter criterion: Global: PHP */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '    $query = db_select(\'node\', \'n\');
    $query->join(\'taxonomy_index\', \'t\', \'n.nid = t.nid\');
    $query->fields(\'n\',array(\'nid\'));
    $query->condition(\'type\', \'videoaudio\');
    $query->condition(\'tid\', "$row->tid");
    $result = $query->execute();
    $count = 0;
    while($record = $result->fetchAssoc()) { $count++; };
    if($count == 0) { return TRUE; } else { return FALSE; }';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'media';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'مكتبة المرئيات والصوتيات';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['video_main_page'] = array(
  t('Master'),
  t('المكتبة المرئية والصوتية'),
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
  t('node'),
  t('.'),
  t(','),
  t('لا توجد أي مادة في هذا القسم'),
  t('+'),
  t('المزيد'),
  t('<div class="readmore_bg">[name_1]</div>'),
  t('Page'),
);


?>