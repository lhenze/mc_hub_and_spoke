<?php
/**
 * @file
 * mc_hub_and_spoke.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mc_hub_and_spoke_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-82d8a75bde4ff36a1c89b3fb77664e68'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '82d8a75bde4ff36a1c89b3fb77664e68',
    'module' => 'views',
    'node_types' => array(
      0 => 'spoke',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => -17,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-mc_recent_comments-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mc_recent_comments-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'sidebar_previous_clusters',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => -17,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-meta_for_spoke-spoke_meta_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'meta_for_spoke-spoke_meta_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-my_parent_hub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_parent_hub-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tochub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tochub-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'mediacommons' => array(
        'region' => 'homepage_top',
        'status' => 1,
        'theme' => 'mediacommons',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
