<?php

$view = new view();
$view->name = 'article_of_the_month';
$view->description = '';
$view->tag = 'الرئيسية';
$view->base_table = 'node';
$view->human_name = 'مقال الشهر';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'مقال الشهر';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* الحقل: المحتوى: مختصر المقال */
$handler->display->display_options['fields']['field_front_page_text']['id'] = 'field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['table'] = 'field_data_field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['field'] = 'field_front_page_text';
$handler->display->display_options['fields']['field_front_page_text']['label'] = '';
$handler->display->display_options['fields']['field_front_page_text']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_front_page_text']['element_type'] = 'p';
$handler->display->display_options['fields']['field_front_page_text']['element_label_colon'] = FALSE;
/* الحقل: المحتوى: المسار */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['text'] = '<p>[field_front_page_text]<a class="article_link_f" href="[path]">...تكملة</a></p>
<div class="mobile_month_art">
<a class="article_link_mobile" href="[path]">مقال الشهر</a>
</div>';
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  'article' => 'article',
);
/* Filter criterion: المحتوى: مقال الشهر ؟ (field_featured) */
$handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
$handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
$handler->display->display_options['filters']['field_featured_value']['value'] = array(
  1 => '1',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'مقال الشهر';
$translatables['article_of_the_month'] = array(
  t('Master'),
  t('مقال الشهر'),
  t('more'),
  t('Apply'),
  t('إعادة الضبط'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<p>[field_front_page_text]<a class="article_link_f" href="[path]">...تكملة</a></p>
<div class="mobile_month_art">
<a class="article_link_mobile" href="[path]">مقال الشهر</a>
</div>'),
  t('Block'),
);


?>