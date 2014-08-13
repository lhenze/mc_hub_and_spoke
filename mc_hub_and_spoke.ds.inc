<?php
/**
 * @file
 * mc_hub_and_spoke.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mc_hub_and_spoke_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|hub|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'hub-title',
        'ft' => array(),
      ),
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_period' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_curators_editors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|hub|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'hub-title',
        'ft' => array(),
      ),
    ),
    'field_contributors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_period' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_curators_editors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|hub|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|spoke|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'spoke';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|spoke|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|spoke|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'spoke';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'hub_navigation' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'aside',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'role="complementary"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'metadata_for_spoke' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|spoke|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|spoke|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'spoke';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'by',
          'lb-el' => 'span',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_attached_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'thumb',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
  );
  $export['node|spoke|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mc_hub_and_spoke_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'hub_navigation';
  $ds_field->label = 'Hub Navigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'spoke|full';
  $ds_field->properties = array(
    'block' => 'views|82d8a75bde4ff36a1c89b3fb77664e68',
    'block_render' => '3',
  );
  $export['hub_navigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'metadata_for_spoke';
  $ds_field->label = 'Metadata for Spoke';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|meta_for_spoke-spoke_meta_block',
    'block_render' => '3',
  );
  $export['metadata_for_spoke'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mc_hub_and_spoke_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_pubstat',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_pubstat' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|hub|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_body',
        2 => 'field_spokes',
        3 => 'field_representative_image',
        4 => 'field_co_editor',
        5 => 'field_contributors',
        6 => 'field_pubstat',
        7 => 'field_period',
        8 => 'path',
        9 => 'field_curators_editors',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_body' => 'ds_content',
      'field_spokes' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_contributors' => 'ds_content',
      'field_pubstat' => 'ds_content',
      'field_period' => 'ds_content',
      'path' => 'ds_content',
      'field_curators_editors' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|hub|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_period',
        1 => 'title',
        2 => 'field_representative_image',
        3 => 'field_curators_editors',
        4 => 'field_co_editor',
        5 => 'field_body',
        6 => 'field_spokes',
      ),
    ),
    'fields' => array(
      'field_period' => 'ds_content',
      'title' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_body' => 'ds_content',
      'field_spokes' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|hub|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_period',
        1 => 'title',
        2 => 'field_curators_editors',
        3 => 'field_representative_image',
        4 => 'field_body',
        5 => 'field_contributors',
      ),
    ),
    'fields' => array(
      'field_period' => 'ds_content',
      'title' => 'ds_content',
      'field_curators_editors' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_contributors' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|hub|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|spoke|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_embed',
        2 => 'field_body',
        3 => 'field_tags',
        4 => 'field_attached_images',
        5 => 'field_part_of',
        6 => 'field_contributors',
        7 => 'field_pubstat',
        8 => 'path',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_embed' => 'ds_content',
      'field_body' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_attached_images' => 'ds_content',
      'field_part_of' => 'ds_content',
      'field_contributors' => 'ds_content',
      'field_pubstat' => 'ds_content',
      'path' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|spoke|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'metadata_for_spoke',
      ),
      'left' => array(
        3 => 'field_embed',
        4 => 'field_body',
        5 => 'field_tags',
      ),
      'right' => array(
        6 => 'hub_navigation',
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'post_date' => 'header',
      'metadata_for_spoke' => 'header',
      'field_embed' => 'left',
      'field_body' => 'left',
      'field_tags' => 'left',
      'hub_navigation' => 'right',
      'comments' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|spoke|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_attached_images',
        1 => 'title',
        2 => 'author',
      ),
    ),
    'fields' => array(
      'field_attached_images' => 'ds_content',
      'title' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|spoke|teaser'] = $ds_layout;

  return $export;
}
