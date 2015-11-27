<?php
/**
 * @file
 * view_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function view_panel_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_review';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel review',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel_review',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'review' => 'review',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 2,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Genre',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'title' => array(
        'type' => 'region',
        'title' => 'Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'film',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'film' => array(
        'type' => 'region',
        'title' => 'Film',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'body',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'body' => array(
        'type' => 'region',
        'title' => 'Body',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'body' => NULL,
      'title' => NULL,
      'film' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5176d3d1-061f-4b96-8738-cfccfd12631b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9b1f0b5-9acd-4304-bc2e-9e9536c4bb1a';
    $pane->panel = 'body';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9b1f0b5-9acd-4304-bc2e-9e9536c4bb1a';
    $display->content['new-c9b1f0b5-9acd-4304-bc2e-9e9536c4bb1a'] = $pane;
    $display->panels['body'][0] = 'new-c9b1f0b5-9acd-4304-bc2e-9e9536c4bb1a';
    $pane = new stdClass();
    $pane->pid = 'new-365b5aa2-f6bd-449c-9f8c-b62ab522f503';
    $pane->panel = 'film';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_node_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'node_reference_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Film',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '365b5aa2-f6bd-449c-9f8c-b62ab522f503';
    $display->content['new-365b5aa2-f6bd-449c-9f8c-b62ab522f503'] = $pane;
    $display->panels['film'][0] = 'new-365b5aa2-f6bd-449c-9f8c-b62ab522f503';
    $pane = new stdClass();
    $pane->pid = 'new-9c0e53a1-b53c-4c80-b4bc-cb007955f840';
    $pane->panel = 'title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c0e53a1-b53c-4c80-b4bc-cb007955f840';
    $display->content['new-9c0e53a1-b53c-4c80-b4bc-cb007955f840'] = $pane;
    $display->panels['title'][0] = 'new-9c0e53a1-b53c-4c80-b4bc-cb007955f840';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c9b1f0b5-9acd-4304-bc2e-9e9536c4bb1a';
  $handler->conf['display'] = $display;
  $export['node_view__panel_review'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function view_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panel_page';
  $page->task = 'page';
  $page->admin_title = 'panel page';
  $page->admin_description = '';
  $page->path = 'panel-page/';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panel_page__panel_context_fd7b23c6-f538-40af-8df7-fb58ec8d3ada';
  $handler->task = 'page';
  $handler->subtask = 'panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Panel page';
  $display->uuid = '6edf8f1a-8eeb-4d1e-a118-db4d53ad3b76';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5cb6a2c-0970-41aa-be21-67c495dd20f9';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'genre_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5cb6a2c-0970-41aa-be21-67c495dd20f9';
    $display->content['new-a5cb6a2c-0970-41aa-be21-67c495dd20f9'] = $pane;
    $display->panels['center'][0] = 'new-a5cb6a2c-0970-41aa-be21-67c495dd20f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panel_page'] = $page;

  return $pages;

}
