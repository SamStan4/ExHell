#include "exhell_main_view.hpp"

#include <iostream>

#include "ui/spreadsheet_main_view.hpp"
#include "exhell_macros.hpp"

// MARK: public

exhell::exhell_main_view& exhell::exhell_main_view::get_instance()
{
  static exhell_main_view instance;
  return instance;
}

// MARK: private

exhell::exhell_main_view::exhell_main_view(QWidget* _parent, const int _start_width, const int _start_height)
  : QMainWindow(_parent), spreadsheet_view(this)
{
  this->setWindowTitle("ExHell");
  this->resize(_start_width, _start_height);
  this->setup_tool_bars();

  this->setCentralWidget(&this->spreadsheet_view);
}

exhell::exhell_main_view::~exhell_main_view() = default;

void exhell::exhell_main_view::setup_tool_bars(void)
{
  this->setup_main_tool_bar();
}

void exhell::exhell_main_view::setup_main_tool_bar(void)
{
  this->main_tool_bar = this->addToolBar("main");

  QAction *new_action = new QAction("New", this);
  new_action->setShortcut(QKeySequence::New);
  new_action->setStatusTip("Create a new file");
  
  QAction *open_action = new QAction("Open", this);
  open_action->setShortcut(QKeySequence::Open);
  open_action->setStatusTip("Open an existing file");
  
  QAction *save_action = new QAction("Save", this);
  save_action->setShortcut(QKeySequence::Save);
  save_action->setStatusTip("Save the current file");

  this->main_tool_bar->addAction(new_action);
  this->main_tool_bar->addAction(open_action);
  this->main_tool_bar->addAction(save_action);

  connect(new_action, &QAction::triggered, this, &exhell::exhell_main_view::handle_new_action_event);
  connect(open_action, &QAction::triggered, this, &exhell::exhell_main_view::handle_open_action_event);
  connect(save_action, &QAction::triggered, this, &exhell::exhell_main_view::handle_save_action_event);
}

void exhell::exhell_main_view::handle_new_action_event(void)
{
  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "new action event" << RESET << std::endl;
  #endif

  // TODO: handle new action event
}

void exhell::exhell_main_view::handle_open_action_event(void)
{
  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "open action event" << RESET << std::endl;
  #endif

  // TODO: handle open action event
}

void exhell::exhell_main_view::handle_save_action_event(void)
{
  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "save action event" << RESET << std::endl;
  #endif

  // TODO: handle save action event
}