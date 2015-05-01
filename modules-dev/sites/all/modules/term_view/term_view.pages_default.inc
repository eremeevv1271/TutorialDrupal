<?php
/**
 * @file
 * term_view.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function term_view_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__sub_category';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sub-Category',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term parent',
        'keyword' => 'parent_term',
        'name' => 'term_parent',
        'type' => 'top',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'name' => 'sub_category',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'article_categories' => 'article_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term_has_parent',
          'settings' => array(
            'vid' => '3',
            'vid_3' => array(
              6 => '6',
              9 => '9',
            ),
            'vid_2' => array(),
            'vid_1' => array(),
            'include_self' => 0,
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628bb078-ee70-4a58-9656-72f6947b3500';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70b31376-56b7-4b4d-adec-f5a9fca2eb54';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70b31376-56b7-4b4d-adec-f5a9fca2eb54';
    $display->content['new-70b31376-56b7-4b4d-adec-f5a9fca2eb54'] = $pane;
    $display->panels['left'][0] = 'new-70b31376-56b7-4b4d-adec-f5a9fca2eb54';
    $pane = new stdClass();
    $pane->pid = 'new-c9506cb8-c0b2-4e0f-88e9-59449ab771c1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_terms-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_term_parent_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9506cb8-c0b2-4e0f-88e9-59449ab771c1';
    $display->content['new-c9506cb8-c0b2-4e0f-88e9-59449ab771c1'] = $pane;
    $display->panels['left'][1] = 'new-c9506cb8-c0b2-4e0f-88e9-59449ab771c1';
    $pane = new stdClass();
    $pane->pid = 'new-39cd6b25-dac7-4c86-98a1-b42359db28d5';
    $pane->panel = 'right';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
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
    $pane->uuid = '39cd6b25-dac7-4c86-98a1-b42359db28d5';
    $display->content['new-39cd6b25-dac7-4c86-98a1-b42359db28d5'] = $pane;
    $display->panels['right'][0] = 'new-39cd6b25-dac7-4c86-98a1-b42359db28d5';
    $pane = new stdClass();
    $pane->pid = 'new-0b4a7818-2c7e-4b7f-883c-653fc2eeafa1';
    $pane->panel = 'right';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'child',
      'include_current_term' => 0,
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'relationship_term_parent_1',
      'override_title' => 1,
      'override_title_text' => 'More in %parent_term',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0b4a7818-2c7e-4b7f-883c-653fc2eeafa1';
    $display->content['new-0b4a7818-2c7e-4b7f-883c-653fc2eeafa1'] = $pane;
    $display->panels['right'][1] = 'new-0b4a7818-2c7e-4b7f-883c-653fc2eeafa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-39cd6b25-dac7-4c86-98a1-b42359db28d5';
  $handler->conf['display'] = $display;
  $export['term_view__sub_category'] = $handler;

  return $export;
}
