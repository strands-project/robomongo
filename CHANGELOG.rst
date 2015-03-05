^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package robomongo
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.0.2 (2015-03-04)
------------------
* copy-paste error
* Added catkin package for building on build server
* Added cmake find files for ogre and ros
* Added another warning if no ros core running
* Added error dialogues when failing to show ROS message
* Forgot to add my own libreadline stuff
* Now everything seems to be working
* Now we can view all sorts of messages, just need to get images to show more than once
* Added rviz visualizer class
* Got displaying of point clouds working in robomongo
* Merge branch 'master' of github.com:paralect/robomongo
* W00t! New app icon designed by Andres Kievsky (@anknetau)
* Merge pull request `#693 <https://github.com/strands-project/robomongo/issues/693>`_ from anknetau/master
  Added new app icon in a variety of png and iDraw formats
* Set VERSION policy for cmake 3.0+ (CMP0048)
* Bump 0.8.5rc0
* Note contribution for PR `#684 <https://github.com/strands-project/robomongo/issues/684>`_
* Merge pull request `#684 <https://github.com/strands-project/robomongo/issues/684>`_ from volans-/master
  CreateUserDialog.cpp: fixed typo in warning message
* Added app icon in a variety of png and iDraw formats
* CreateUserDialog.cpp: fixed typo in warning message
* Add missing issue to changelog
* Changelog for 0.8.5
* Merge pull request `#637 <https://github.com/strands-project/robomongo/issues/637>`_ from stennie/issue-636
  Issue `#636 <https://github.com/strands-project/robomongo/issues/636>`_: Log errors if can't create settings path or write to config file
* Issue `#636 <https://github.com/strands-project/robomongo/issues/636>`_: Log errors if can't create settings path or write to config file
* Merge pull request `#633 <https://github.com/strands-project/robomongo/issues/633>`_ from stennie/issue-468
  Document OS X editing shortcuts for begin/end of line/text
* Add undocumented OS X editing shortcuts for begin/end of line/text
  (mentioned in `#468 <https://github.com/strands-project/robomongo/issues/468>`_)
* Merge pull request `#632 <https://github.com/strands-project/robomongo/issues/632>`_ from stennie/issue-631
  Fix `#631 <https://github.com/strands-project/robomongo/issues/631>`_: "Duplicate Query In New Tab"
* Fix `#631 <https://github.com/strands-project/robomongo/issues/631>`_: "Duplicate Query In New Tab"
  - add keyboard shortcut: Ctrl/Cmd+Shift+T
  - add to Window menu
* Merge pull request `#629 <https://github.com/strands-project/robomongo/issues/629>`_ from stennie/issue-455
  Fix `#455 <https://github.com/strands-project/robomongo/issues/455>`_: Show execution time for operations that don't return results
* Fix `#455 <https://github.com/strands-project/robomongo/issues/455>`_: Show execution time for operations that don't return results
* Merge pull request `#628 <https://github.com/strands-project/robomongo/issues/628>`_ from stennie/issue-622
  Fix `#622 <https://github.com/strands-project/robomongo/issues/622>`_: Type of Double changed to Int32 on save document
* Fix `#622 <https://github.com/strands-project/robomongo/issues/622>`_: Type of Double changed to Int32 on save document
* Merge pull request `#604 <https://github.com/strands-project/robomongo/issues/604>`_ from VBelozyorov/issue-47
  Include connection name in TopStatusBar
* Unused TopStatusBar::setCurrentConnection removed
* Connection name in TopStatusBar
* Merge pull request `#578 <https://github.com/strands-project/robomongo/issues/578>`_ from gavruk/autocompldisable
  Ability to disable autocompletion (`#512 <https://github.com/strands-project/robomongo/issues/512>`_)
* Ability to disable autocompletion (`#512 <https://github.com/strands-project/robomongo/issues/512>`_)
* Merge pull request `#595 <https://github.com/strands-project/robomongo/issues/595>`_ from VBelozyorov/issue-457
  Changes in toolbars visibility are saved in config file
* Merge pull request `#591 <https://github.com/strands-project/robomongo/issues/591>`_ from VBelozyorov/issue-384
  Expand/collapse multiple selections
* Text in tooltips are changed in accordance to key shortcuts
* Expand/Collapse Recursively work not only for entire documents
* Selected index doesn't pops up to the super-parent if only one item selected in BsonTreeView
* Merge branch 'master' of https://github.com/paralect/robomongo into issue-384
* Merge branch 'master' of https://github.com/paralect/robomongo into issue-457
  Conflicts:
  src/robomongo/core/settings/SettingsManager.cpp
* limit and offest sizes are increased
* Merge pull request `#593 <https://github.com/strands-project/robomongo/issues/593>`_ from VBelozyorov/issue-514
  Option to disable selected code autoexecution when opening a new tab
* Merge pull request `#596 <https://github.com/strands-project/robomongo/issues/596>`_ from VBelozyorov/logs-time-format
  Include full date/time for log entries
* Toolbars names changed
* Submenu for toolbars visibility management.
  Using enable/disable instead of visible/invisible for exec toolbar and orientation action
* Date and hours leading zero
* Changing the toolbar visibility by program logic mustn't cause to config changing
* Merge pull request `#592 <https://github.com/strands-project/robomongo/issues/592>`_ from VBelozyorov/cursor-init
  Cursor initialization - place between curly brackets for default find({}) query
* Merge pull request `#594 <https://github.com/strands-project/robomongo/issues/594>`_ from VBelozyorov/issue-433
  "Show/Hide" buttons for password and passphrase fields
* AM/PM removed from records in LogWidget
* SshTunelTab replaced with SshTunnelTab
* Changes in toolbars visibility are saved in config file
  `#457 <https://github.com/strands-project/robomongo/issues/457>`_
* SettingsManager stores toolbars settings
  only isVisisble, for now
* Clean up GenericName
* Fix `#433 <https://github.com/strands-project/robomongo/issues/433>`_: "Show/Hide" buttons for password and passphrase fields
* Fixed saving option into config file
* Item for options menu
* Check setting state on new tab opening
* Setting for auto execution
* Merge pull request `#588 <https://github.com/strands-project/robomongo/issues/588>`_ from gavruk/settingsmanagertypo
  [-] SettingsManager typo
* "View documents" item of collection's context menu does the same query as double click on collection item
* Cursor placed between curly braces after double click on collection item
* "Collapse Recursively" feature for Tree Mode
* Robomongo::detail::uniqueRows() returns indexes of top-level items
* [-] SettingsManager typo
* Expanding of multiple selected documents
  `#384 <https://github.com/strands-project/robomongo/issues/384>`_
* Typo Multy -> Multi
* Merge pull request `#584 <https://github.com/strands-project/robomongo/issues/584>`_ from stennie/issue-559
  Fix `#559 <https://github.com/strands-project/robomongo/issues/559>`_: Default ObjectID - Timestamp Tooltip
* Fix `#559 <https://github.com/strands-project/robomongo/issues/559>`_: Default ObjectID - Timestamp Tooltip
  - add "Copy Timestamp from ObjectId" to context menu for ObjectId field
* Merge pull request `#581 <https://github.com/strands-project/robomongo/issues/581>`_ from stennie/issue-447
  Issue `#447 <https://github.com/strands-project/robomongo/issues/447>`_: Reload actually re-executes query
* Issue `#447 <https://github.com/strands-project/robomongo/issues/447>`_: Reload actually re-executes query
  - rename "Reload" to "Re-execute Query"
  - rename "Duplicate" to "Duplicate Query In New Shell"
* Merge pull request `#580 <https://github.com/strands-project/robomongo/issues/580>`_ from stennie/issue-551
  Fix `#551 <https://github.com/strands-project/robomongo/issues/551>`_: Reload Query with keyboard shortcut doesn't work
* Fix `#551 <https://github.com/strands-project/robomongo/issues/551>`_: Reload Query with keyboard shortcut doesn't work
* Merge branch 'master' of github.com:paralect/robomongo
* Use setShortcuts() instead of setShortCut() with QKeySequence
  combinations to catch alternate sequences in addition to primary.
* Merge pull request `#579 <https://github.com/strands-project/robomongo/issues/579>`_ from stennie/issue-421
  Fix `#421 <https://github.com/strands-project/robomongo/issues/421>`_: Consistent numbering for tree/table/text view items
* Fix `#421 <https://github.com/strands-project/robomongo/issues/421>`_: Consistent numbering for tree/table/text view items
* Detab and fix indentation
* Fix spello in comment
* Spello fixup: s/indexses/indexes/g
* Merge pull request `#577 <https://github.com/strands-project/robomongo/issues/577>`_ from stennie/issue-548
  Fix `#548 <https://github.com/strands-project/robomongo/issues/548>`_: Cannot make the Edit Document Window smaller
* Fix `#548 <https://github.com/strands-project/robomongo/issues/548>`_: Cannot make the Edit Document Window smaller
  - minimumSize() of editor window was incorrectly set based on screen
  geometry
* Merge pull request `#576 <https://github.com/strands-project/robomongo/issues/576>`_ from stennie/issue-87
  Fix `#87 <https://github.com/strands-project/robomongo/issues/87>`_: Switching tabs using standard keys on OS X
* Fix `#87 <https://github.com/strands-project/robomongo/issues/87>`_: Switching tabs using standard keys on OS X
  - use QKeysequence::NextChild and QKeysequence::PreviousChild for
  standard cross-platform next/prev tab keyboard shortcuts
  - add Window menu including full screen, minimize, and prev/next tab
* Merge pull request `#570 <https://github.com/strands-project/robomongo/issues/570>`_ from stennie/issue-405
  Fix `#405 <https://github.com/strands-project/robomongo/issues/405>`_: expand current server as soon as you connect to it
* Fix `#405 <https://github.com/strands-project/robomongo/issues/405>`_: expand current server as soon as you connect to it
* Merge pull request `#569 <https://github.com/strands-project/robomongo/issues/569>`_ from stennie/issue-468
  Issue 468: add Ctrl/Cmd+'/'' as comment/uncomment keyboard shortcut
* Add note on new shortcuts to toggle comment/uncomment
* Per `#468 <https://github.com/strands-project/robomongo/issues/468>`_: add Ctrl/Cmd+'/'' as comment/uncomment keyboard shortcut
* Merge pull request `#568 <https://github.com/strands-project/robomongo/issues/568>`_ from stennie/issue-544
  Fix `#544 <https://github.com/strands-project/robomongo/issues/544>`_: Space after document causes validation error
* Fix `#544 <https://github.com/strands-project/robomongo/issues/544>`_: Space after document causes validation error
  - error messages for JSON validation could still be greatly improved
* Remove obsolete instructions
* Grammar correction: s/is no results/are no results/
* Merge pull request `#567 <https://github.com/strands-project/robomongo/issues/567>`_ from stennie/issue-564
  Fix `#564 <https://github.com/strands-project/robomongo/issues/564>`_: Add user preference to have line numbers displayed in editor by default
* Fix `#564 <https://github.com/strands-project/robomongo/issues/564>`_
  - User preference to have line numbers displayed in editor by default
* Merge pull request `#556 <https://github.com/strands-project/robomongo/issues/556>`_ from VBelozyorov/issue-509
  Saving previous view modes in private field of OutputWidget
* Merge pull request `#555 <https://github.com/strands-project/robomongo/issues/555>`_ from VBelozyorov/issue-467
  Comment / uncomment selected code in the shell
* Unnecessary typecast removed
  `#467 <https://github.com/strands-project/robomongo/issues/467>`_
* Merge pull request `#565 <https://github.com/strands-project/robomongo/issues/565>`_ from stennie/issue-449
  Fixes `#449 <https://github.com/strands-project/robomongo/issues/449>`_: Add line numbers to JSON editing window (OS X)
* Fixes `#449 <https://github.com/strands-project/robomongo/issues/449>`_
  - Line numbers in JSON views can be toggled with Ctrl+F11 on OS X
* Merge pull request `#563 <https://github.com/strands-project/robomongo/issues/563>`_ from stennie/issue-519
  Fixes `#519 <https://github.com/strands-project/robomongo/issues/519>`_: Full screen mode not working on OS X
* Fixes `#519 <https://github.com/strands-project/robomongo/issues/519>`_: Full screen mode not working on OS X
  - changed fullscreen shortcut to Cmd/Ctrl+F11
* Merge pull request `#560 <https://github.com/strands-project/robomongo/issues/560>`_ from stennie/issue-408
  Fixes `#408 <https://github.com/strands-project/robomongo/issues/408>`_
* Fixes `#408 <https://github.com/strands-project/robomongo/issues/408>`_
  - use standard "New" shortcuts to open new connections
  - use standard "Open" shortcuts to open .js files
  - update shortcuts.txt with current shortcuts
* Saving previous view modes in private field of OutputWidget
  `#509 <https://github.com/strands-project/robomongo/issues/509>`_
* Ctrl+Shift+C shortcut toggle comments in the shell
  `#467 <https://github.com/strands-project/robomongo/issues/467>`_
* Public methods for managing value of ScriptWidget::_disableTextAndCursorNotifications
* Ignore Ctrl+Shift+C in RoboScintilla::keyPressEvent()
* Hotkey for comment toggling in KeyboardManager
* Merge pull request `#527 <https://github.com/strands-project/robomongo/issues/527>`_ from stennie/issue-414
  Fix `#414 <https://github.com/strands-project/robomongo/issues/414>`_: View documents fail if collection name is "group"
* Merge pull request `#530 <https://github.com/strands-project/robomongo/issues/530>`_ from stennie/issue-500
  Fix `#500 <https://github.com/strands-project/robomongo/issues/500>`_: TTL index should allow expiry of 0 seconds
* Merge pull request `#529 <https://github.com/strands-project/robomongo/issues/529>`_ from stennie/issue-505
  Fix `#505 <https://github.com/strands-project/robomongo/issues/505>`_: OS specific keyboard shortcut tips
* Merge pull request `#528 <https://github.com/strands-project/robomongo/issues/528>`_ from stennie/issue-506
  Fix `#506 <https://github.com/strands-project/robomongo/issues/506>`_: Usability request - add initial curly braces to command bar
* Merge pull request `#525 <https://github.com/strands-project/robomongo/issues/525>`_ from stennie/issue-524
  Fix `#524 <https://github.com/strands-project/robomongo/issues/524>`_: OS X build fixes for XCode 5 / libc++
* Fix `#500 <https://github.com/strands-project/robomongo/issues/500>`_: TTL index should allow expiry of 0 seconds
  Docs example:
  http://docs.mongodb.org/manual/tutorial/expire-data/#expire-documents-at-a-certain-clock-time
* Fix `#505 <https://github.com/strands-project/robomongo/issues/505>`_: OS specific keyboard shortcut tips
* Fix `#506 <https://github.com/strands-project/robomongo/issues/506>`_: Usability request - add initial curly braces to command bar
* Fix `#414 <https://github.com/strands-project/robomongo/issues/414>`_
  Given that conflicting function names may vary between versions of MongoDB,
  it is much saner to use the more explicit getCollection() syntax instead of
  trying to enumerate all exceptions.
* Need to include locale.h for libc++
* Upgrade from gtest 1.6.0 to 1.7.0
* Cherry-pick some libc++ fixes from: https://jira.mongodb.org/browse/SERVER-11070
* Fix typo: s/Openning/Opening/
* Include common rules from gitignore.io
* Resource entries configuration refactored
* Tab character removed from source files
* CMakeLists.txt cleanup
* CMake cleanups, baby steps
* ComboBox setCurrentText emulation for Qt4
* Merge branch 'master' of github.com:paralect/robomongo
* Qt4 support is back
* Spaces removed from EXTRAPATH
* Fix for MongoDB build command with extrapath
* Merge branch 'v0.8.4' of github.com:topilski/robomongo into topilski-0.8.4
* Changelog updated
* Backup of CMake files
* Minor changes in utils.cmake
* .gitignore updated
* Update App version
* Merge branch 'master' of https://github.com/paralect/robomongo
* MSVC build fixes
* Support for all reserved words when building collection query and fix for collection names with slashes (`#404 <https://github.com/strands-project/robomongo/issues/404>`_)
* Output is splited on executable and library.
* Merge pull request `#409 <https://github.com/strands-project/robomongo/issues/409>`_ from topilski/084rc2
  0.8.4 RC2
* README.md updates
* README.md updates
* Vote for the feature
* Note about backlog
* Fix unix builds
* Some code update
* Date min and max is not parsed or displayed correctly `#356 <https://github.com/strands-project/robomongo/issues/356>`_ (displaying)
* Date min and max is not parsed or displayed correctl(only crash) `#356 <https://github.com/strands-project/robomongo/issues/356>`_
* Merge pull request `#403 <https://github.com/strands-project/robomongo/issues/403>`_ from VBelozyorov/issue-402
  Saving initial viewMode on forced downgrade, because `#402 <https://github.com/strands-project/robomongo/issues/402>`_
* Saving initial viewMode on forced downgrade, because `#402 <https://github.com/strands-project/robomongo/issues/402>`_
* Change log updated for 0.8.4
* Whats new file updated for Robomongo 0.8.4
* Merge pull request `#393 <https://github.com/strands-project/robomongo/issues/393>`_ from topilski/084-beta2-bugfix
  Some little bugfix
* Naming tweaks
* Add fast build scripts for Windows
* Add new build scripts
* Delete not needed files
* `#386 <https://github.com/strands-project/robomongo/issues/386>`_ Multiple confirmation at pressing "delete" key at deleting multiple documents.
* Robomongo 0.8.4 beta 2
* SSH configuration UI tweaks
* SSL configuration UI tweaks
* Merge pull request `#383 <https://github.com/strands-project/robomongo/issues/383>`_ from topilski/bugfix
  Bugfix
* Connection context menu appears independently of position of Robomongo instance.
* Design of diagnostic dialog while testing connection differs from 0.8.3 (new fix)
* Fix zlib search algorithm
* Add static link openssl to build script
* Delete cmake warnings
* Fixup build cpack script
* Add zlib library to openssl static linking
* Fix cpack build script
* Design of "Create Database" dialog is changed from 0.8.3
* Design of diagnostic dialog while testing connection differs from 0.8.3
* Fix rpm package
* Crash at expanding something that you has no permissions to expand.
* Create or edit index problem `#341 <https://github.com/strands-project/robomongo/issues/341>`_
* Manage connection: SSH support checkbox unchecks automatically at checking/unchecking authentication.
* Merge remote-tracking branch 'upstream/master'
* Merge pull request `#375 <https://github.com/strands-project/robomongo/issues/375>`_ from topilski/bugfix
  Bugfix and Code polishing
* Add CollectionInfo struct, some refactoring
* Fix modeles dialogs problem
* [UI] Cannot downsize `edit/view document` windows. (rbm0.8.3, win7x32) `#369 <https://github.com/strands-project/robomongo/issues/369>`_
* Crash at pressing "Ctrl+T" without any connection.
* SSH option "Security" always switched to "password" after unchecking SSH and saving connection.
* Fix linux package build
* Update cmakefile
* Add creating symlinks for libssl libraries
* Crash when add ISODate field `#350 <https://github.com/strands-project/robomongo/issues/350>`_
* Merge branch 'master' of https://github.com/topilski/robomongo
* Merge pull request `#367 <https://github.com/strands-project/robomongo/issues/367>`_ from topilski/117-ssh
  `#117 <https://github.com/strands-project/robomongo/issues/117>`_ and `#100 <https://github.com/strands-project/robomongo/issues/100>`_: SSH+SSL
* Add libssl to install phase
* Update error message in case of SSL+SSH are enabled together.
* Once checked SSH, cannot be unchecked.
* Update beta version
* Fix displaying server name, and direct connection to ssl server
* Stable build
* Typos in Manage Connection dialog.
* Stable ssl pemFile
* Regexp error (with non-latin symbols) `#351 <https://github.com/strands-project/robomongo/issues/351>`_
* Fix displaying server name
* Added log messages if ssh connect failed
* Merge libssh2_win and libssh_linux configs
* SSH support  `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (work on Mac) added needed mac header
* SSH support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (work on fedora) added needed linux header
* ssh support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ first stable windows version (without ssh+ssl)
* Stable ssh connection (intermediate commit)
* ssh support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (only windows, some problem with shell, intermediate commit)
* Added SSH tunnel dialog
* Added RDBClientConnection (Robomongo client connection)
* ScriptEngine global mutex
* Fix build
* Delete include directory
* Remove pcre not needed includes
* Stable global variables
* Support for mongod's with SSL `#100 <https://github.com/strands-project/robomongo/issues/100>`_ (work also with sslPEMKeyFile)
* Support for mongod's with SSL `#100 <https://github.com/strands-project/robomongo/issues/100>`_ (Work as mongo --ssl only)
* Added ssh first step.
* Move parse algoritm to mongo jsonparser
* Merge pull request `#359 <https://github.com/strands-project/robomongo/issues/359>`_ from VBelozyorov/issue-345
  Auto expand of first item in tree view. `#345 <https://github.com/strands-project/robomongo/issues/345>`_
* Merge pull request `#365 <https://github.com/strands-project/robomongo/issues/365>`_ from VBelozyorov/urls-in-about-dlg
  GitHub url doesn't work in About Dialog (Mac)
* Merge pull request `#364 <https://github.com/strands-project/robomongo/issues/364>`_ from rskvazh/patch-1
  Url doesn't work in About Dialog (Mac)
* Specified protocol in url for issues on github
* Menu option for auto expanding of first item
* fix url in about dialog
  In Mac OS X link "Visit Robomongo website:" does not work.
* Fix ssh checkbox
* Typos in Public and Private key dialogs
* Stable ssh and ssl suport, final build
* Ssh add publicKey connection
* Auto expand of first item in tree view. `#345 <https://github.com/strands-project/robomongo/issues/345>`_
* Typos in Manage Connection dialog.
* Stable ssl pemFile
* Regexp error (with non-latin symbols) `#351 <https://github.com/strands-project/robomongo/issues/351>`_
* Fix displaying server name
* Added log messages if ssh connect failed
* Merge libssh2_win and libssh_linux configs
* SSH support  `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (work on Mac) added needed mac header
* SSH support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (work on fedora) added needed linux header
* ssh support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ first stable windows version (without ssh+ssl)
* License mentioned in README.md
* License is mentioned in README.md
* Stable ssh connection (intermediate commit)
* ssh support `#117 <https://github.com/strands-project/robomongo/issues/117>`_ (only windows, some problem with shell, intermediate commit)
* Added SSH tunnel dialog
* Added RDBClientConnection (Robomongo client connection)
* ScriptEngine global mutex
* Fix build
* Delete include directory
* Remove pcre not needed includes
* Stable global variables
* Support for mongod's with SSL `#100 <https://github.com/strands-project/robomongo/issues/100>`_ (work also with sslPEMKeyFile)
* Support for mongod's with SSL `#100 <https://github.com/strands-project/robomongo/issues/100>`_ (Work as mongo --ssl only)
* Merge remote-tracking branch 'upstream/master'
* Merge branch 'master' of https://github.com/topilski/robomongo
* Added ssh first step.
* Merge pull request `#343 <https://github.com/strands-project/robomongo/issues/343>`_ from topilski/master
  Stable 0.8.3 release
* Fix context menu "view documents"
* Expand Recursively broken in 0.8.3 beta 2 `#342 <https://github.com/strands-project/robomongo/issues/342>`_
* Robomongo log file now located in temp directory
* Update version number
* What's new in 0.8.3 updated
* Description for Copy to Database operation
* Padding in Copy Collection dialog
* Merge pull request `#330 <https://github.com/strands-project/robomongo/issues/330>`_ from topilski/master
  Several issues fixed, code prepared to release
* Stable build
* Clone collection to different server bugs.
* Cannot connect to server 2.4 with authorization
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_ (remove not connected servers)
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_(Update)
* Empty command is shown in log after opening new shell.
* Empty command is shown in log at selecting "Rebuild"
* Update "Native" style
* DataBase doesn't created if its name is long enough.
* Copy JSON behave differently in Tree View than in Table View `#325 <https://github.com/strands-project/robomongo/issues/325>`_
* In Table Mode multiple selection works only for first 3 colums `#327 <https://github.com/strands-project/robomongo/issues/327>`_
* Log messages are always in one line `#326 <https://github.com/strands-project/robomongo/issues/326>`_
* Tree View multiple selection inside one document `#328 <https://github.com/strands-project/robomongo/issues/328>`_
* Cannot connect to remote server when you are not admin `#324 <https://github.com/strands-project/robomongo/issues/324>`_
* Collection query building with invalid symbols broken `#323 <https://github.com/strands-project/robomongo/issues/323>`_
* Merge pull request `#322 <https://github.com/strands-project/robomongo/issues/322>`_ from topilski/master
  Bugs fixes, stable build
* Revert js
* TTL Index troubles `#313 <https://github.com/strands-project/robomongo/issues/313>`_
* ProgressBarPopup placed on center.
* When inserting/deleting documents, all documents from collection loaded `#318 <https://github.com/strands-project/robomongo/issues/318>`_
* After edit of document, list of documents doesn't updated `#319 <https://github.com/strands-project/robomongo/issues/319>`_
* TTL Index troubles `#313 <https://github.com/strands-project/robomongo/issues/313>`_
* Add "Copy JSON" menu item to context menu `#298 <https://github.com/strands-project/robomongo/issues/298>`_
* Strange padding of collumns in Tree View and inability to select row `#310 <https://github.com/strands-project/robomongo/issues/310>`_
* Log message tweaks `#317 <https://github.com/strands-project/robomongo/issues/317>`_
* Toggle result orientation doesn't work anymore `#320 <https://github.com/strands-project/robomongo/issues/320>`_
* Merge remote-tracking branch 'upstream/master'
  Conflicts:
  src/robomongo/gui/widgets/LogWidget.cpp
  and Right click on empty area in Tree View and Table View doesn't show "Insert Document" `#321 <https://github.com/strands-project/robomongo/issues/321>`_
* Row numbers in Tree View starts from 1 (as in Table View)
* Logs button in the status bar
* Added "Clear All" action in LogWidget context menu
* Merge pull request `#312 <https://github.com/strands-project/robomongo/issues/312>`_ from topilski/master
  Loading bar doesn't centered `#309 <https://github.com/strands-project/robomongo/issues/309>`_
* KeapAlive On
* Stable code
* Fix linux build
* Update MongoWorker
* Delete not needed events, some refactoring
* Size of Tooltip for User can be increased. Now, user ID is cutted of in tooltip.
* Allow multiple deleting of documents by selecting two cells in Table View `#311 <https://github.com/strands-project/robomongo/issues/311>`_
* Loading bar doesn't centered `#309 <https://github.com/strands-project/robomongo/issues/309>`_
* Delete WorkAreaTabWidget
* Menu items text changes, larger Document Editor with added maximize button.
* 0.8.3 beta 2
* Padding between indicators corrected
* WorkAreaWidget added in order to set correct padding of inner tab widget
* _id field existence check and minor UI tweaks
* QToolBar separators removed, because they were drawn automatically on Windows
* QToolBar style removed
* Merge pull request `#308 <https://github.com/strands-project/robomongo/issues/308>`_ from topilski/master
  BSON Undefined type doesn't rendered to string correctly `#306 <https://github.com/strands-project/robomongo/issues/306>`_
* Minor refactoring
* Update ConnectionDialog
* Add the document _id in the tree view `#142 <https://github.com/strands-project/robomongo/issues/142>`_
* Refactoring ConnectionsDialog
* "X" symbol in "Diagnostic" window should be shown in RED for "Authorization failed" reason
* Fixed linux build
* Preferences dialog `#80 <https://github.com/strands-project/robomongo/issues/80>`_ (start implementation)
* BSON Undefined type doesn't rendered to string correctly `#306 <https://github.com/strands-project/robomongo/issues/306>`_
* UI tweaks and code formatting
* Merge pull request `#305 <https://github.com/strands-project/robomongo/issues/305>`_ from topilski/master
  Update Logger, fixed some little bugs
* Code cleanup
* Fixed text mistakes
* Update Logger, add color messages to LogWidget
* New collection doesn't appear after executing "Duplicate Connection" from context menu. `#277 <https://github.com/strands-project/robomongo/issues/277>`_
* Small refactoring
* Code cleanup ScriptWidget
* When Authorization fails to server - show corresponding message.
* Merge pull request `#302 <https://github.com/strands-project/robomongo/issues/302>`_ from topilski/master
  Line breaks extends height of row in Tree View `#300 <https://github.com/strands-project/robomongo/issues/300>`_
* Empty server shown in "Copy collection" dialog after disconnection from one server.
* Add "Copy JSON" menu item to context menu `#298 <https://github.com/strands-project/robomongo/issues/298>`_ (inner copy)
* Line breaks extends height of row in Tree View `#300 <https://github.com/strands-project/robomongo/issues/300>`_ (little fix)
* Fix tooltips for tablemodel
* Update shortcuts, refactoring QueryWidget
* Delete WorkAreaWidget
* Refactoring WorkAreaWidgets
* Show tooltips for items in Table View and Tree View `#301 <https://github.com/strands-project/robomongo/issues/301>`_
* Line breaks extends height of row in Tree View `#300 <https://github.com/strands-project/robomongo/issues/300>`_
* Code formating tweaks
* Merge pull request `#299 <https://github.com/strands-project/robomongo/issues/299>`_ from topilski/master
  JSON list validation `#246 <https://github.com/strands-project/robomongo/issues/246>`_
* Minor code cleanup
* Fix up setlocate
* JSON list validation `#246 <https://github.com/strands-project/robomongo/issues/246>`_ (new more stable fix)
* Update stylesheets
* Add styles support to application
* Add "Copy JSON" menu item to context menu `#298 <https://github.com/strands-project/robomongo/issues/298>`_
* Removing multiple documents from UI `#174 <https://github.com/strands-project/robomongo/issues/174>`_ (added context menu if multiply selection)
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_ (fix loading databases)
* Make UI for Adding Users in 2.2 mongodb the same as was in 0.8.2 version.
* Support old mongouser style
* Merge pull request `#294 <https://github.com/strands-project/robomongo/issues/294>`_ from topilski/master
  Clone collection to different server function `#58 <https://github.com/strands-project/robomongo/issues/58>`_
* Support mongodb 2.4.x style users `#139 <https://github.com/strands-project/robomongo/issues/139>`_
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_, minor fixes
* Speed up fill model process
* Disable copy collection its own database
* Refactoring Output widget.
* unique name in CopyCollectionDialog
* Fix F11 keypress
* Fix Mac Os build
* Fix memory leaks
* Small refactoring
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_
* Add 'Clone collection to different server' function `#58 <https://github.com/strands-project/robomongo/issues/58>`_(intermediate commit)
* Merge pull request `#293 <https://github.com/strands-project/robomongo/issues/293>`_ from topilski/master
  Crash creating new Database (Mac OS X 10.8.4) `#291 <https://github.com/strands-project/robomongo/issues/291>`_
* Crash creating new Database (Mac OS X 10.8.4) `#291 <https://github.com/strands-project/robomongo/issues/291>`_
* Merge remote-tracking branch 'upstream/master'
  Conflicts:
  src/robomongo/core/utils/Logger.h
* Minor style cleanups in /core folder
* Code cleanup
* Merge pull request `#292 <https://github.com/strands-project/robomongo/issues/292>`_ from topilski/master
  Enable query logging `#108 <https://github.com/strands-project/robomongo/issues/108>`_
* Some code cleanup
* Fix logfile name
* Add View context menu
* Enable query logging `#108 <https://github.com/strands-project/robomongo/issues/108>`_
* Merge pull request `#289 <https://github.com/strands-project/robomongo/issues/289>`_ from topilski/master
  Implement new fetures, fix bugs
* Some code cleanup
* Traansform tablemodel to proxy model
* Fix copy value on TableView
* Removing multiple documents from UI `#174 <https://github.com/strands-project/robomongo/issues/174>`_ (Added delete and shift+del shortcuts in table/tree views)
* Hot key "F5" doesn't work
* Support mongodb 2.4.x style users `#139 <https://github.com/strands-project/robomongo/issues/139>`_
* Fixed linux build
* Refactoring OutputItemContentWidget.h
* 0.8.1 left panel collections/functions/users navigation doesn't work when authenticating against the DB `#282 <https://github.com/strands-project/robomongo/issues/282>`_
* Removing multiple documents from UI `#174 <https://github.com/strands-project/robomongo/issues/174>`_ (Added delete and shift+delete shortcuts in table/tree views, intermediate commit)
* Inserting multiple documents from UI `#173 <https://github.com/strands-project/robomongo/issues/173>`_
* Support mongodb 2.4.x style users `#139 <https://github.com/strands-project/robomongo/issues/139>`_
* Support mongodb 2.4.x style users `#139 <https://github.com/strands-project/robomongo/issues/139>`_ (intermediate commit)
* Merge pull request `#285 <https://github.com/strands-project/robomongo/issues/285>`_ from topilski/master
  BsonTreeWidget transform to BstonTreeView
* A way to disable Alt + number shortcut `#192 <https://github.com/strands-project/robomongo/issues/192>`_
* Retain current view mode when running search `#93 <https://github.com/strands-project/robomongo/issues/93>`_
* OutputWidget refactoring
* Added Notifier
* Code update
* Update context menu in views
* Finished merging BsonTreeView and BsonTableView
* Inheritance BsonTableModel from BsonTreeModel
* Merge remote-tracking branch 'upstream/master'
* BsonTreeWidget transform to BstonTreeView intermediate commit
* What's new updated
* What's new for 0.8.1 updated
* Merge pull request `#281 <https://github.com/strands-project/robomongo/issues/281>`_ from topilski/master
  Release 0.8.1
* Add background to tableview
* Showgrid = true
* Remove beta postfix
* Default value for batchSize
* Fixed height for header removed, because this doesn't work correctly on Mac
* Paging tweaks
* .mongorc.js and .robomongorc.js fixes
* Several minor tweaks for TableMode
* Paging Left problem fixed
* Merge pull request `#279 <https://github.com/strands-project/robomongo/issues/279>`_ from topilski/master
  Copy value in Table Mode fixed
* Fix copy value
* Merge pull request `#278 <https://github.com/strands-project/robomongo/issues/278>`_ from topilski/master
  Release candidate 0.8.1 beta 2
* Fixed little bugs, design issues
* Fix dependencies for deb package
* Fix package dependencies rpm
* Fixed heights of headers removed - it may vary between platforms
* TableView visual tweaks
* Merge pull request `#275 <https://github.com/strands-project/robomongo/issues/275>`_ from topilski/master
  Release Candidate
* Stable build
* Entering incorrect symbols as database name isn't handled properly. `#262 <https://github.com/strands-project/robomongo/issues/262>`_(New fix)
* Same height of the rows in Tree Mode and Table mode would be very nice. `#267 <https://github.com/strands-project/robomongo/issues/267>`_
* Some improvement code
* Fix linux build
* Fix build script
* Display context menu in Table Mode as in Tree Mode `#266 <https://github.com/strands-project/robomongo/issues/266>`_
* Added bsonElemnt to bsontableitem
* Fix rpm dependencies
* Fix linux dependencies
* Display context menu in Table Mode as in Tree Mode `#266 <https://github.com/strands-project/robomongo/issues/266>`_ intermediate commit
* Border colors in Table Mode should be the same as in Tree Mode. `#268 <https://github.com/strands-project/robomongo/issues/268>`_
* Align text in table's header to the left (when in Table Mode) `#270 <https://github.com/strands-project/robomongo/issues/270>`_
* Tweaks of View Modes Switcher `#271 <https://github.com/strands-project/robomongo/issues/271>`_
* Fix dependencies
* Merge pull request `#265 <https://github.com/strands-project/robomongo/issues/265>`_ from topilski/master
  Entering incorrect symbols as database name isn't handled properly. `#262 <https://github.com/strands-project/robomongo/issues/262>`_
* Desktop icon isn't created despite corresponding checkbox was checked at installation. `#260 <https://github.com/strands-project/robomongo/issues/260>`_
* Entering incorrect symbols as database name isn't handled properly. `#262 <https://github.com/strands-project/robomongo/issues/262>`_
* Merge pull request `#264 <https://github.com/strands-project/robomongo/issues/264>`_ from topilski/master
  Fix Linux build
* Fix Linux build
* Merge pull request `#263 <https://github.com/strands-project/robomongo/issues/263>`_ from topilski/master
  First implementation of TableView
* Update MongoElement sources
* Update icons for TableView, some improvement code
* Added support Array and Documents in TableView
* First implementation simple BsonTableWidget
* Merge branch 'master' of https://github.com/topilski/robomongo
* Table implementation intermediate commit
* TableView intermediate commit
* TableView start implementation
* Fixed build according Dmitry Schetnikovich recommendations
* Several std::string-related fixes and Settings Manager cleanup.
* Merge pull request `#257 <https://github.com/strands-project/robomongo/issues/257>`_ from topilski/master
  Several bugs fixed
* Added Load .robomongo.js to initscript, fixed return keypress in paging widget, fix limits
* Added VERIFY macro
* Fix up line numbers in QsciScintilla widget.
* the limit() method not auto completed `#245 <https://github.com/strands-project/robomongo/issues/245>`_
* JSON list validation `#246 <https://github.com/strands-project/robomongo/issues/246>`_
* Error installing on CentOS 6 `#252 <https://github.com/strands-project/robomongo/issues/252>`_
* Error installing on CentOS 6 `#252 <https://github.com/strands-project/robomongo/issues/252>`_ intermediate commit
* Fix dependencies for project
* Some refactoring
* Merge pull request `#251 <https://github.com/strands-project/robomongo/issues/251>`_ from topilski/master
  Fix unicode problem
* Fix unicode problem
* Readme updated
* Merge pull request `#250 <https://github.com/strands-project/robomongo/issues/250>`_ from topilski/master
  Replace QString to std::string where possible
* Remove Concatenator class
* Some improvement code (QString to std::string)
* Replace QString to std::string completed
* Merge remote-tracking branch 'upstream/master'
* QString replace to std string where possible, next step, intermediate commit
* Fixup linux build
* QString replace to std string where possible, intermediate commit
* Merge remote-tracking branch 'upstream/master'
* Merge branch 'master' of https://github.com/topilski/robomongo
* Replace QList container to std::vector
* What's new file updated
* What's new file updated
* Merge pull request `#241 <https://github.com/strands-project/robomongo/issues/241>`_ from topilski/master
  Stable package building
* Fixed Windows packages build script
* Fix description
* Theme for Linux `#239 <https://github.com/strands-project/robomongo/issues/239>`_
* Add README file to the Linux packages `#240 <https://github.com/strands-project/robomongo/issues/240>`_
* Merge remote-tracking branch 'upstream/master'
* Minor changes in package description
* README for Linux and minor changes in json.cpp
* Stable package build script for windows
* Merge pull request `#237 <https://github.com/strands-project/robomongo/issues/237>`_ from topilski/master
  Added check of BUILD variable in CMakeLists.txt
* Added check of BUILD variable in CMakeLists.txt
* Merge pull request `#236 <https://github.com/strands-project/robomongo/issues/236>`_ from topilski/master
  Packages build scripts
* Fix tar.gz package generation
* Fix Visual studio 11 find behavior, update package build script for mac
* Fix package bash script
* Added some cache variables to main CMakeLists.txt
* Fix deb package generation
* Fix package build scripts on Linux
* Added package generator scripts
* Merge remote-tracking branch 'upstream/master'
* Changelog updated
* Fix project description and summary, actual for packages only
* Changelog updates
* Merge remote-tracking branch 'upstream/master'
* DBRef correct parsing (`#113 <https://github.com/strands-project/robomongo/issues/113>`_)
  Robomongo understand three fields in  DBRef sub-objects:
  {
  "$ref" : "my_collection",
  "$id" : "my_id",
  "$db" : "my_db"
  }
  $id and $db fields can be of any type (int, string, date etc.).
* Add dependencies to test target
* Version updated (now beta 2)
* Fix up CMAKE_BUILD_TYPE variable
* Delete not needed headers, small refactoring
* Cmake refactoring MSVC
* Merge pull request `#234 <https://github.com/strands-project/robomongo/issues/234>`_ from topilski/master
  Stable build
* Fix Mac OS build
* Fixed cmake linker flags
* Added cmake linker flags
* Fix gif image displaying, added CHANGELOG and COPYRIGHT files to install target
* Fix for incorrect handling of Dates mentioned in changelog
* Changelog updated
* COPYRIGHT file added. build-requirements.txt removed
* Merge pull request `#232 <https://github.com/strands-project/robomongo/issues/232>`_ from topilski/master
  Icon in windows installer should be corrected `#182 <https://github.com/strands-project/robomongo/issues/182>`_
* Fix displaying Date in BsonTreeWidget
* Added validation user input in the PagingWidget class
* Improve EventBus code
* Icon in windows installer should be corrected `#182 <https://github.com/strands-project/robomongo/issues/182>`_
* Common refactoring.
* Refactoring, delete not needed includes, fix code style
* Delete old not needed files, added QtUtils
* Merge branch 'master' of https://github.com/paralect/robomongo
* Fixed incorrect text for OK button in ConnectionDialog
* NSIS top logo images
* Unified placement order of Ok and Cancel buttons in dialogs
* Date conversion tests cleanup
* Integer overflow protection in brute-force test
* Merge pull request `#231 <https://github.com/strands-project/robomongo/issues/231>`_ from topilski/master
  Update min and max anchors in datesystem
* Update min and max anchors in datesystem
* Merge remote-tracking branch 'upstream/master'
* 'Display Dates in' is now before 'Legacy UUID encoding' menu item. View mode items moved to their own group 'Default View Mode'
* Merge remote-tracking branch 'upstream/master'
* Long long for dates
* Fix test
* Merge remote-tracking branch 'upstream/master'
* Minor test changes
* Some improvement of code
* Merge pull request `#230 <https://github.com/strands-project/robomongo/issues/230>`_ from topilski/master
  Correct MongoDB Date rendering and parsing. `#224 <https://github.com/strands-project/robomongo/issues/224>`_
* Correct MongoDB Date rendering and parsing. `#224 <https://github.com/strands-project/robomongo/issues/224>`_
* Fix Mac Os build
* Fix data parsing
* Merge remote-tracking branch 'upstream/master'
  Conflicts:
  src/robomongo/core/settings/SettingsManager.cpp
  tests/test_parser.cpp
* Brute-force test for dates parsing and rendering. Some minor tweaks of tests
* Merge
* Default View Mode is a Custom View Mode
* Long tooltip now cut to 700 symbols. Monospace font is used for tooltips
* Fix bsonTreeView
* Fix timeZones
* Document context menu items now have 'Document' suffix for all operations on full Document
* Expand Recursively context menu position changed
* Indexes context menu cleanup
* Edit Index goes before Delete Index
* Tooltips for Open/Save buttons
* Refactoring BsonTreeItem
* Correct MongoDB Date rendering and parsing. `#224 <https://github.com/strands-project/robomongo/issues/224>`_ (Added some tests)
* Merge remote-tracking branch 'upstream/master'
* Text width calculation using Scintilla methods
* Line number margin tweaks.
  1) Background and foreground color set.
  2) Automatic margin width calculation, based on number of digits.
  3) ScriptWidget autocompletion popup now respects Line Number margin.
* ToolBar icon size fixed (`#169 <https://github.com/strands-project/robomongo/issues/169>`_)
* Index icon
* Merge branch 'master' of https://github.com/paralect/robomongo
* Index icon
* Correct MongoDB Date rendering and parsing. (intermediate commit)
* Refactoring CollectionStatsTreeItem
* Small refactoring
* Correct MongoDB Date rendering and parsing. `#224 <https://github.com/strands-project/robomongo/issues/224>`_ (intermediate commit)
* Merge pull request `#223 <https://github.com/strands-project/robomongo/issues/223>`_ from topilski/master
  Floats keep rounding off to 4 or 5 decimal places in the view when converted from string to float
* Floats keep rounding off to 4 or 5 decimal places in the view when converted from string to float `#115 <https://github.com/strands-project/robomongo/issues/115>`_
* Deleted not needed functions
* Merge pull request `#222 <https://github.com/strands-project/robomongo/issues/222>`_ from topilski/master
  Added unit test support, based on GTest library
* Fix unit tests build on linux platform
* Added first test case, using gtest solution
* Merge pull request `#221 <https://github.com/strands-project/robomongo/issues/221>`_ from topilski/master
  Checked all package instalation on clean machines
* Fix license for rpm package
* Hide component window in NSIS package
* Fix Mac os dmg generation.
* Updated nsis package creation.
* Fix linux build
* Update js cmakefile according SConscript
* Fix deb package generation, after cpack execution simple exec fixup_deb.sh
* Merge pull request `#219 <https://github.com/strands-project/robomongo/issues/219>`_ from topilski/master
  Stable version, little bugs fixed
* Sparse checkbox incorrect behavior. `#215 <https://github.com/strands-project/robomongo/issues/215>`_
* Memory not released, when closing shell tab. `#213 <https://github.com/strands-project/robomongo/issues/213>`_
* Fixed Mac Os build problem
* "Expire after" in Index Editor is an optional field. `#218 <https://github.com/strands-project/robomongo/issues/218>`_
* Text Weight should be BSONObj, not just string. `#216 <https://github.com/strands-project/robomongo/issues/216>`_
* 0 (zero) is a valid value for "Expire after" field in Index Editor. `#217 <https://github.com/strands-project/robomongo/issues/217>`_
* When saving scripts, file name extension should be ".js" if not specified otherwise. `#185 <https://github.com/strands-project/robomongo/issues/185>`_
* Merge branch 'master' of https://github.com/topilski/robomongo
* If file save was unsuccessful, Robomongo doesn't show any message. `#212 <https://github.com/strands-project/robomongo/issues/212>`_
* Minor tweaks of help label text on EditIndex dialog
* Merge pull request `#214 <https://github.com/strands-project/robomongo/issues/214>`_ from topilski/master
  Bug fixes
* After successful build on Mac OS X, cannot run Robomongo `#211 <https://github.com/strands-project/robomongo/issues/211>`_
* Some fixes in creating deb package.Some fixes in generation deb package.
* If file save was unsuccessful, Robomongo doesn't show any message. `#212 <https://github.com/strands-project/robomongo/issues/212>`_
* Index "key" field renders incorrectly `#210 <https://github.com/strands-project/robomongo/issues/210>`_
* Merge pull request `#209 <https://github.com/strands-project/robomongo/issues/209>`_ from topilski/master
  Added support to monitor document change according behaviors of text edi...
* Added support to monitor document change according behaviors of text editors .
* Merge pull request `#208 <https://github.com/strands-project/robomongo/issues/208>`_ from topilski/master
  Fix bugs new step
* Search Problem `#196 <https://github.com/strands-project/robomongo/issues/196>`_
* Merge pull request `#201 <https://github.com/strands-project/robomongo/issues/201>`_ from topilski/master
  Fixed little bugs, stable build
* Add support crosscompile for Mac Os system, needed only specify CMAKE_OSX_SYSROOT (Mac OS sdk path)
* On all platforms application name is Robomongo (first letter is uppercase) `#186 <https://github.com/strands-project/robomongo/issues/186>`_
* Search Problem `#196 <https://github.com/strands-project/robomongo/issues/196>`_, improving code
* Indicator of empty results in ExplorerWidget. `#195 <https://github.com/strands-project/robomongo/issues/195>`_
* Horizontal ScrollBar Policy for FindFrame `#189 <https://github.com/strands-project/robomongo/issues/189>`_
* Remove tab symbols from all source files. `#197 <https://github.com/strands-project/robomongo/issues/197>`_
* Merge branch 'master' of https://github.com/topilski/robomongo
* Remove tab symbols from all source files. `#197 <https://github.com/strands-project/robomongo/issues/197>`_
* Cannot connect to MongoDB on Windows `#183 <https://github.com/strands-project/robomongo/issues/183>`_
* Fix Mac os buttons images problem
* Fix Mac Os build
* Some shortcuts are not working now `#193 <https://github.com/strands-project/robomongo/issues/193>`_
* Profile Robomongo with valgrind `#194 <https://github.com/strands-project/robomongo/issues/194>`_
* Profile Robomongo with valgrind `#194 <https://github.com/strands-project/robomongo/issues/194>`_ (intermediate commit)
* Refactoring MongoDocument and MongoCollection,
* Fix build
* Refactoring settings
* Small refactoring SettingsManager
* ScriptWidget blinking, when adding/removing lines. `#184 <https://github.com/strands-project/robomongo/issues/184>`_
* Fix font height for qsciScintilla
* Search Problem `#196 <https://github.com/strands-project/robomongo/issues/196>`_
* Drop Duplicates should depend on Unique checkbox `#190 <https://github.com/strands-project/robomongo/issues/190>`_
* ScriptWidget blinking, when adding/removing lines. `#184 <https://github.com/strands-project/robomongo/issues/184>`_
* Horizontal ScrollBar Policy for FindFrame `#189 <https://github.com/strands-project/robomongo/issues/189>`_
* Horizontal ScrollBar Policy for FindFrame `#189 <https://github.com/strands-project/robomongo/issues/189>`_
* Merge branch 'master' of https://github.com/topilski/robomongo
* "make install" problem on Linux `#200 <https://github.com/strands-project/robomongo/issues/200>`_
* Merge pull request `#199 <https://github.com/strands-project/robomongo/issues/199>`_ from topilski/master
  Fixed packages and tested on clean machines (Windows and Linux only)
* Fix rc files
* On all platforms application name is Robomongo (first letter is uppercase) `#186 <https://github.com/strands-project/robomongo/issues/186>`_
* In Index Editor we missed Server indicator. `#191 <https://github.com/strands-project/robomongo/issues/191>`_
* Indicator of empty results in ExplorerWidget. `#195 <https://github.com/strands-project/robomongo/issues/195>`_
* Fix Mac Os package on clean machine
* ESC should close any opened dialog `#188 <https://github.com/strands-project/robomongo/issues/188>`_
* Horizontal ScrollBar Policy for FindFrame `#189 <https://github.com/strands-project/robomongo/issues/189>`_
* FileDialog filter `#187 <https://github.com/strands-project/robomongo/issues/187>`_, When saving scripts, file name extension should be ".js" if not specified otherwise. `#185 <https://github.com/strands-project/robomongo/issues/185>`_
* Fix Linux build
* Refactoring integrate-qt.cmake
* Check linux build, fix cmake
* Update CmakeFile for windows
* Some refactoring CMakeFile
* Fix linking error on release Mac Os, add lib cocoa to install target
* Add Qtbus to install target, fix linux package, tested on clean machine
* Add qt.conf for plugins
* Merge remote-tracking branch 'upstream/master'
* Add needed libs to install target(Windows)
* Merge pull request `#179 <https://github.com/strands-project/robomongo/issues/179>`_ from topilski/master
  Packages for all systems created.
* Changed desktop entry according standarts
* Use CPACK_GENERATOR=DragNDrop on Mac Os
* Delete not needed libraries on Windows platform
* Linux package `#177 <https://github.com/strands-project/robomongo/issues/177>`_, delete not needed files
* Fix Deb package
* Delete RPM spec template, add post install and postuninstall scripts
* Linux package `#177 <https://github.com/strands-project/robomongo/issues/177>`_(Deb)
* Add postbuild step to deb package
* Fix windows build
* Fix desktop entry template
* Merge pull request `#178 <https://github.com/strands-project/robomongo/issues/178>`_ from topilski/master
  Fixed linking errors, added LICENSE and robomongo.sh to install target.
* Added desktop template for linux
* Fix linking errors, add LICENSE and robomongo.sh to install target
* Add search capability in text mode view results `#32 <https://github.com/strands-project/robomongo/issues/32>`_
* Merge pull request `#176 <https://github.com/strands-project/robomongo/issues/176>`_ from topilski/master
  Fix Mac OS build, added more info to bundle
* Fix Mac Os build, added more info to bundle
* Merge pull request `#168 <https://github.com/strands-project/robomongo/issues/168>`_ from topilski/master
  Check new build system of Robomongo on Mac OS X `#153 <https://github.com/strands-project/robomongo/issues/153>`_
* Check new build system of Robomongo on Mac OS X `#153 <https://github.com/strands-project/robomongo/issues/153>`_
* Added needed files
* Fix Mac Os bundle
* Merge pull request `#167 <https://github.com/strands-project/robomongo/issues/167>`_ from topilski/master
  Windows build fixed
* Fix windows build
* Merge pull request `#162 <https://github.com/strands-project/robomongo/issues/162>`_ from topilski/master
  Create package target for windows, fix make install on linux
* Make searches looped `#170 <https://github.com/strands-project/robomongo/issues/170>`_, Search: show the number of results found `#171 <https://github.com/strands-project/robomongo/issues/171>`_ (only warning message)
* Fix deb package
* Delete symlinks, rename libraies on install step
* Fix ln links
* Fix linux build
* CMakeFiles refactoring
* Add symlinks and needed libs to install target
* Merge branch 'master' of https://github.com/topilski/robomongo
* Update rpm spec file, fix debain package process
* Fix linux CmakeFile
* Update CmakeFile for Mac
* Generate win.rc file, add template rc for other platforms
* First stable implementation of DEB and RPM packages
* Start implementation of DEB package
* First implementation of rpm package for linux
* Windows package `#163 <https://github.com/strands-project/robomongo/issues/163>`_
* Robomongo icon missed on Windows `#164 <https://github.com/strands-project/robomongo/issues/164>`_
* Fix shortcut in nsis installer
* Fix windows build
* Fix linux build
* First implementation of Windows nsis package
* Add Cpack option
* Fix linux make install target
* Upper case for qjson project
* Design/Layout tweaks of Index Properties Dialog
* Merge pull request `#160 <https://github.com/strands-project/robomongo/issues/160>`_ from topilski/master
  Fixed json text displaying
* fix json text displaying
* Merge pull request `#159 <https://github.com/strands-project/robomongo/issues/159>`_ from topilski/master
  Fixed Linux build
* Fix linux build
* Merge pull request `#158 <https://github.com/strands-project/robomongo/issues/158>`_ from topilski/master
  Support all index options `#151 <https://github.com/strands-project/robomongo/issues/151>`_
* Support all index options `#151 <https://github.com/strands-project/robomongo/issues/151>`_
* NumberLong() support in BJSON Parser and Writer `#157 <https://github.com/strands-project/robomongo/issues/157>`_
  All int64 values now represented as NumberLong(x).
* Link qjson static on linux, upper case for cmake files
* Support all index options `#151 <https://github.com/strands-project/robomongo/issues/151>`_ (without dropDups, sparse default_language, language_override, weights)
* Fix linux build
* Allow full editing of Indexes `#152 <https://github.com/strands-project/robomongo/issues/152>`_ (intermediate commit)
* Fix linux build
* Code cleanup
* Added EnsureIndexInfo class
* CMake Scons fix
* Merge pull request `#156 <https://github.com/strands-project/robomongo/issues/156>`_ from topilski/master
  Check new build system of Robomongo on Mac OS X (intermediate) `#153 <https://github.com/strands-project/robomongo/issues/153>`_
* Merge branch 'master' of https://github.com/topilski/robomongo
* Check new build system of Robomongo on Mac OS X (intermediate) `#153 <https://github.com/strands-project/robomongo/issues/153>`_
* fix scincila displaying text on linux
* fix qsciscintilla rendering text on Windows
* Merge pull request `#155 <https://github.com/strands-project/robomongo/issues/155>`_ from topilski/master
  Implement Ctrl + F in all editors `#134 <https://github.com/strands-project/robomongo/issues/134>`_
  Show collection's indexes in explorer tree `#74 <https://github.com/strands-project/robomongo/issues/74>`_
  Save button shouldn't be disabled `#146 <https://github.com/strands-project/robomongo/issues/146>`_
* Implement Ctrl + F in all editors `#134 <https://github.com/strands-project/robomongo/issues/134>`_
* refactoring ScriptWidget
* Show collection's indexes in explorer tree `#74 <https://github.com/strands-project/robomongo/issues/74>`_
* Save button shouldn't be disabled `#146 <https://github.com/strands-project/robomongo/issues/146>`_
* Merge pull request `#154 <https://github.com/strands-project/robomongo/issues/154>`_ from topilski/master
  CMake default arguments `#145 <https://github.com/strands-project/robomongo/issues/145>`_
* CMake default arguments `#145 <https://github.com/strands-project/robomongo/issues/145>`_
* fix linux build, add UserResponce action
* fix hide console on Qt5
* hide console on windows,intermediate commit (Allow full editing of Indexes) `#152 <https://github.com/strands-project/robomongo/issues/152>`_
* Drop Index confirmation required `#149 <https://github.com/strands-project/robomongo/issues/149>`_
* For Index creation, use mongo::Robomongo::fromjson() parser, instead of QJson `#150 <https://github.com/strands-project/robomongo/issues/150>`_
* Index operations tweaks (Ensure, Drop, Rename).
  1) MongoClient::ensureIndex() now accepts name of index.
  2) Name of index is used on UI (instead of key name).
  3) MongoClient::deleteIndexFromCollection() simplified.
  4) MongoClient::renameIndexFromCollection() correctly
  performs rename of Index name.
  5) MongoClient::getIndexes() now gets Index names, not key names.
  6) Minor formatting tweaks.
* Merge pull request `#148 <https://github.com/strands-project/robomongo/issues/148>`_ from topilski/master
  Edit Index implementation `#74 <https://github.com/strands-project/robomongo/issues/74>`_
* added edit index item menu
* Merge pull request `#147 <https://github.com/strands-project/robomongo/issues/147>`_ from topilski/master
  CMake architecture auto definitions fixed. Added icons to header EditIndexDialog. Replaced QTextEdit to QScincila. Checkbox isUnique() and isBackground() properties of index. Added common base class to ExplorerTreeItems. Added showContextMenuAtPos() method.
* code cleanup, fix some little bugs
* added common base class to ExplorerTreeItems, added showContextMenuAtPos method
* fix showcontextmenu intermediate commit
* start implementation of showcontextmenu for treeitems
* fix count of Index displaying
* fix CMake architecture auto definitions, added icons to header EditIndexDialog, replace QTextEdit to QScincila, fix checkbox isunique and isbackground properties of index
* Build documentation (Linux only) `#124 <https://github.com/strands-project/robomongo/issues/124>`_
* Merge pull request `#144 <https://github.com/strands-project/robomongo/issues/144>`_ from topilski/master
  View/Refresh context menu items for Indexes subcategory
* add refresh/view index menu items
* Merge pull request `#143 <https://github.com/strands-project/robomongo/issues/143>`_ from topilski/master
  toUtf8() instead of toAscii()
* fix build
* Merge pull request `#140 <https://github.com/strands-project/robomongo/issues/140>`_ from topilski/master
  CMake fixed according to the new requests. Implementation of Index Management started (`#74 <https://github.com/strands-project/robomongo/issues/74>`_)
* fix compile error
* and next fix
* next fix code style
* fix code style
* Show collection's indexes in explorer tree `#74 <https://github.com/strands-project/robomongo/issues/74>`_
* add EditIndexDialog sources
* add delete index implementation
* add "delete index" to menu
* replace tabs to space, style fixes
* Added MongoIndex sources, some refatoring
* fix linux build
* fix cmake according new spec
* Show collection's indexes in explorer tree `#74 <https://github.com/strands-project/robomongo/issues/74>`_ (only displaying)
* add index item intermediate commit
* Update README.md
* README updated
* Merge pull request `#137 <https://github.com/strands-project/robomongo/issues/137>`_ from topilski/master
  Refactoring
* fix KeyboardManager
* minor refactoring
* small clean up
* Platform specific icons for Save/Open actions
* Open/Save toolbar set to be not movable
* Fix for black background color of Search Box in Insert/Edit Document Text Editor
* Default view mode returned back to Tree mode
* Merge pull request `#136 <https://github.com/strands-project/robomongo/issues/136>`_ from topilski/master
  Expand all children `#106 <https://github.com/strands-project/robomongo/issues/106>`_
* expand all children `#106 <https://github.com/strands-project/robomongo/issues/106>`_
* Fixed text line height for Linux.
* Merge pull request `#135 <https://github.com/strands-project/robomongo/issues/135>`_ from topilski/master
  Add button to toggle line numbers `#112 <https://github.com/strands-project/robomongo/issues/112>`_
* fix openAction behavior
* start refactoring ScriptWidget
* intermediate commit (Implement Ctrl + F in all editors)
* Add button to toggle line numbers `#112 <https://github.com/strands-project/robomongo/issues/112>`_
* Merge pull request `#130 <https://github.com/strands-project/robomongo/issues/130>`_ from topilski/master
  Ability to save and open script files in shell `#120 <https://github.com/strands-project/robomongo/issues/120>`_ & `#96 <https://github.com/strands-project/robomongo/issues/96>`_
* refactoring GuiiRegistry
* Find text tweaks (`#32 <https://github.com/strands-project/robomongo/issues/32>`_)
  1) Next / Previous key bindings (Enter and Shift+Enter)
  2) All find text will be selected by default
  3) QLineEdit now used, instead of QTextEdit
  4) Fix for incorrect scrolling of selected text.
  Seems this is a bug of Scintilla (see comments in the code)
  5) Minor UI tweaks (spaces added)
* Minor formatting changes
* Merge branch 'master' of https://github.com/paralect/robomongo
* Ignoring *.user and jswgen from SpiderMonkey
* Merge pull request `#129 <https://github.com/strands-project/robomongo/issues/129>`_ from topilski/master
  Added search capability in text mode view results (`#32 <https://github.com/strands-project/robomongo/issues/32>`_)
* Merge pull request `#128 <https://github.com/strands-project/robomongo/issues/128>`_ from mirmasej/patch-1
  robomongo.sh updated
* Update robomongo.sh
  Use absolute paths so the script can be run from anywhere including .desktop file.
* Dumb file added
* Merge pull request `#127 <https://github.com/strands-project/robomongo/issues/127>`_ from topilski/master
  Build scripts for linux fixed according to the new build system
* fix path to qscintilla
* fix build script for linux
* SConstruct removed from the root folder
  We are using CMake, instead of SCons.
* Merge pull request `#126 <https://github.com/strands-project/robomongo/issues/126>`_ from topilski/master
  CMake for Windows and Linux
* fix bat files for building application
* Open/Save/Save As in toolbar and File menu `#131 <https://github.com/strands-project/robomongo/issues/131>`_
* fix build.bat for windows
* add line numbers to RoboScintilla
* add open implementation on FileMenu
* add actions to file menu
* fix linux build, project ready to development
* fix windows build
* Ability to save and open script files in shell `#120 <https://github.com/strands-project/robomongo/issues/120>`_ (implemented)
* fix crash
* next step of clean up code
* some refactoring cmake files, code style fixes
* add open file implementation
* add open to popup menu
* save script intermediate commit
* Merge remote-tracking branch 'upstream/master'
  Conflicts:
  src/robomongo/gui/editors/FindFrame.cpp
* add actions to filemenu
* fix install script for windows
* fix prev search behavior, add icon to close button
* added findFrame, intermediate commit (Add search capability in text mode view results)
* add_subdirectory for boost mongo thrid-party, fix install behavior on Windows
* fix linux build
* add architecture switch option
* fix windows build
* LICENSE file added
* Libs folder now ignored
* fix linux link errors
* fix qjson on linux
* fix qjson CMakeLists.txt
* change build options to MDd for debug mode
* some updates in CMakeLists.txt
* some build fixes, add project_helper cmake
* fix build,add prefix and suffix for mongoclient library
* fix windows build
* start fixing windows build
* some refactoring
* Delete not needed sources, fix build on linux
* fix linux build
* add cmake inner files
* add cmake files
* Robomongo ported to Qt 5 `#46 <https://github.com/strands-project/robomongo/issues/46>`_
  Qt 5 is now required. Robomongo will not compile for Qt 4.
  Only Linux version now known to be compiled with Qt 5.
  Windows and Mac OS are need to be verified.
* QJson now compiled with qmake (instead of cmake). Scons script update to automate build/clean/rebuild tasks of QJson
* QScintilla and QJson now part of the source (as third-parties)
* MongoDB now part of sources (as third-party) and Scons will be used to build Robomongo
  MongoDB sources now located in /src/third-party/mongodb. SConstruct file added that
  will be used to automate build process.
* Merge pull request `#114 <https://github.com/strands-project/robomongo/issues/114>`_ from luketn/master
  Persist the view mode setting
* Persist the view mode setting.
* Merge pull request `#109 <https://github.com/strands-project/robomongo/issues/109>`_ from Gavruk/master
  `#90 <https://github.com/strands-project/robomongo/issues/90>`_: Collection starting with underscore cannot be browsed
* fix for `#90 <https://github.com/strands-project/robomongo/issues/90>`_
* Merge pull request `#110 <https://github.com/strands-project/robomongo/issues/110>`_ from Gavruk/autocomplete-tab
  `#95 <https://github.com/strands-project/robomongo/issues/95>`_: autocomplete on tab
* Minor version changes in install script
* `#95 <https://github.com/strands-project/robomongo/issues/95>`_: autocomplete on tab
* Install script fixes
* Merge branch 'master' of https://github.com/paralect/robomongo
* Install script for Linux
* Merge branch 'master' of https://github.com/paralect/robomongo
* Linux i386 release libs
* Merge pull request `#92 <https://github.com/strands-project/robomongo/issues/92>`_ from Lardjo/patch-1
  whats-new.txt updated.
* Update whats-new.txt
  fix year
* Merge pull request `#88 <https://github.com/strands-project/robomongo/issues/88>`_ from Gavruk/master
  Tab circling
* tab circling
* Changelog for 0.7.1
* Incorrect date for 0.7.0 version in changelog
* Changelog updated
* Version changed
* Switch tabs by alt+cmd+arrow for Mac (`#82 <https://github.com/strands-project/robomongo/issues/82>`_)
* Fixed crash when mouse right-click on non-primitive elements (`#85 <https://github.com/strands-project/robomongo/issues/85>`_)
* Merge branch 'master' of https://github.com/paralect/robomongo
* Update template fixed (`#83 <https://github.com/strands-project/robomongo/issues/83>`_)
* "whats-new" and "shortcuts" files added (`#78 <https://github.com/strands-project/robomongo/issues/78>`_)
* Copy value in context menu for UUIDs
* Version changed
* UUID binary subtypes support (`#59 <https://github.com/strands-project/robomongo/issues/59>`_)
  Three encodings supported for legacy UUID subtype (3):
  - Java Encoding
  - .NET Encoding
  - Python Encoding
  New UUID subtype (4) is also supported.
  JSON Parser now understand 5 additional types:
  UUID("...")  =>  HexData(4, "...")
  NUUID("...")  =>  HexData(3, "...") in .NET GUID encoding
  JUUID("...")  =>  HexData(3, "...") in Java UUID encoding
  PYUUID("...")  =>  HexData(3, "...") in Python UUID encoding
  CSUUID("...")  =>  alias for NUUID("...")
  Encoding for legacy UUID subtype can be selected from
  Options -> Legacy UUID Encoding
* HexUtils for some UUID formats (C#, Java, Python).
  Setting added for UUID default encoding. On UI it is in "Options" menu.
* Merge branch 'master' of https://github.com/paralect/robomongo
* Version changed
* Fixed rendering of collection names that are invalid JS names (`#71 <https://github.com/strands-project/robomongo/issues/71>`_)
* Logo
* Fixed incorrect rendering of large values for the db.stats() results (`#70 <https://github.com/strands-project/robomongo/issues/70>`_)
  Such fields as count, size, storageSize, totalIndexSize and avgObjSize
  now correctly manipulated when they exceed sizeof(int).
* Password is hidden by default (`#65 <https://github.com/strands-project/robomongo/issues/65>`_)
  You still can view password, by clicking Show button.
* Merge pull request `#67 <https://github.com/strands-project/robomongo/issues/67>`_ from Gavruk/master
  Hide text in password fields
* Update README.md
* Version in Inno Setup script updated
* Version changed
* Merge branch 'master' of github.com:paralect/robomongo
* Mac install script that also creates dmg image
* Robomongo.app folder template. For Mac executable starts from capital letter.
* Merge branch 'master' of github.com:paralect/robomongo
* Ability to copy simple values (string, dates, numerics, bools) of Bson Elements in the tree (`#33 <https://github.com/strands-project/robomongo/issues/33>`_)
* Space for header indicators
* Explorer background color for Mac tweaked
* Minor changes in inno setup
* Spacing removed for OutputViewer. Spaces on scroll bar in Explorer also removed
* Autocompletion position tweaks
* hide text in password fields
* Alternating color for lists on Mac
* Merge pull request `#64 <https://github.com/strands-project/robomongo/issues/64>`_ from Gavruk/master
  OS X: make connect/save/add buttons default in dialogs
* Fix for crash on Mac when pressing CMD+W (`#60 <https://github.com/strands-project/robomongo/issues/60>`_)
* Mac: make connect/save/add buttons default in dialogs
* Diffs between MongoDB r2.4.0-rc0 and Robomongo 0.6.7
* Support for '~/.mongorc.js' file (`#44 <https://github.com/strands-project/robomongo/issues/44>`_)
  This file will be loaded for every shell.
* Fix for -l option of build scripts
* Version changed
* Tab that is closed with keyboard shortcut (Ctrl+W) now disposed in the same way as for middle-click and cross icon click (`#42 <https://github.com/strands-project/robomongo/issues/42>`_)
* Reindex on collection will not be executed immediately (`#53 <https://github.com/strands-project/robomongo/issues/53>`_)
* Support for collection names that start from number (`#54 <https://github.com/strands-project/robomongo/issues/54>`_)
* Fix for incorrect default database, when cloning or duplicating collection (`#56 <https://github.com/strands-project/robomongo/issues/56>`_)
  Also, you now can double click on "empty space" in tabbar, in order to open
  new tab with the same server/database, as currenlty active shell (it is the
  same as pressing Ctrl+T)
  This feature can be seen as partially implemented `#7 <https://github.com/strands-project/robomongo/issues/7>`_.
* Autocompletion minor tweak
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* Merge branch 'master' of https://github.com/paralect/robomongo
* Build options for build.sh, clean.sh and rebuild.sh changed
  Options
  -------
  Option -d          build in debug mode
  Option -r          build in release mode
  Option -a          build both in debug and release modes
  Option -l <path>   use specified path as path to libs folder
  If lib path (-l) wasn't specified, <robomongo>/libs folder will be used.
  If no args were specified, it will be debug build.
  Example
  --------
  ./build.sh -r
  ./build.sh -d -l /path/to/libs
* Merge pull request `#45 <https://github.com/strands-project/robomongo/issues/45>`_ from Gavruk/master
  OS X release libs
* mac release libs
* Merge pull request `#41 <https://github.com/strands-project/robomongo/issues/41>`_ from stennie/master
  Add namespace for keepAlive() ping when not using auth credentials
* Merge pull request `#40 <https://github.com/strands-project/robomongo/issues/40>`_ from Gavruk/master
  Server explorer bg color like in Finder and buttons layout on OS X + space added in document position number
* Add namespace for keepAlive() ping when not using auth credentials;
  fixes "assertion 16256 Invalid ns [.$cmd]" on ping.
* document position number fixed (space added)
* server explorer background color like in Finder and buttons layout on OS X
* Merge pull request `#39 <https://github.com/strands-project/robomongo/issues/39>`_ from Gavruk/master
  Remove Mac focus rect from BsonTreeWidget and ExplorerTreeWidget
* Remove Mac focus rect from BsonTreeWidget and ExplorerTreeWidget
* Merge pull request `#38 <https://github.com/strands-project/robomongo/issues/38>`_ from Gavruk/master
  OS X UI fixes + duplicate collection feature
* duplicate collection from context menu added
* Merge branch 'master' of github.com:paralect/robomongo
* OS X UI fixes
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* Update README.md
* inno setup changes
* version changed
* Fix for `#34 <https://github.com/strands-project/robomongo/issues/34>`_ (Crashing when viewing results in text mode)
* correct QThread disposing
* Merge pull request `#35 <https://github.com/strands-project/robomongo/issues/35>`_ from stennie/master
  Instructions for creating standalone OS X Robomongo.app
* Instructions for creating standalone OS X Robomongo.app
* windows installer InnoSetup scripts
* version changed
* Keep alive via { ping : 1 } every minute
* Beta mark
* Settings schema version added
* Function code skeleton when adding new one
* Ability to rename function
* About dialog
* Minor three dots tweak
* Count indicators for server folder
* Count indicators for collections, users and functions folders
* Support for JS functions. Create/Edit/Remove/View
* Support for RegEx, Code and CodeWScope element types
* Label names tweaks
* To print source of function, you do not need to type .toString() - it will print source automatically
* Stop button added
* Version changed
* Title changed
* Changed label text in ConnectionsDialog
* Manage Connections window opened when application starts
* Menu and toolbar changes
* Comments color in script editor changed
* Separator on toolbar removed
* Context menu items reposition (`#25 <https://github.com/strands-project/robomongo/issues/25>`_, `#26 <https://github.com/strands-project/robomongo/issues/26>`_)
* ToolBar buttons shown only if needed (`#21 <https://github.com/strands-project/robomongo/issues/21>`_, `#20 <https://github.com/strands-project/robomongo/issues/20>`_)
* Ability to stop execution of script (`#23 <https://github.com/strands-project/robomongo/issues/23>`_)
* Interrupt functionality
* minor
* Version changed
* View/Add/Edit/Remove users
* Identical look of all editors
* Shell keywords for MongoDB. Changes in highlighting schema
* run.sh for OS X
* Unix conditition in qmake pro files
* processinfo_darwing absolute include paths
* Merge branch 'master' of https://github.com/paralect/robomongo
* mongo processinfo_darwin.cpp
* -fpermissive compilation flag
* XP_UNIX def for OS X
* OS X third party libs var
* Merge branch 'master' of github.com:paralect/robomongo
* OS X build files
* OS X build script
* Highlighting schema changed
* Single connection per thread is used now, instead of pool of connections.
* Background color for script text searches...
* Version changed
* Memory leaks of CreateDatabaseDialog
* Remove All Documents from collection implemented
* Support for Create/Drop/Rename of collections in UI. Corresponded context menu items added
* Support for database drop in UI. (Drop Database context menu item)
* Support for database creation in UI. (Create Database context menu item added)
* Borders for CollectionStatsTreeWidget made the same as for BsonTreeWidget
* Version changed.
* Icons for Custom Mode. Tooltips for all mode buttons in results view
* Correct selection of supported view mode. Repair now not executed automatically.
* Support for custom view modes added. Collections Statistics (db.printCollectionStats()) custom view mode partially implemented
* Show Log context menu item for server
* Version changed
* Refresh of server, database and collections implemented. 'Drop Collection' menu item added
* White list is used for one-line commands
* Fix for CRLF/CR PCRE dectection for one-line commands (show dbs, show log etc.)
* Support for MongoDB one-line commands (show dbs, show collections, use some_db etc.)
* debug/release fork
* icons for buttons in DocumentTextEditor
* version updated
* win version upgraded to MongoDB r2.4.0-rc0
* Fix for `#18 <https://github.com/strands-project/robomongo/issues/18>`_ (Loading icon does not disappear)
* fix for documents without _id fields
* Ability to insert new document right from tree widget
* Better formatted JSON output with nicer indention. Dates in JSON are displayed as ISODate('...'), like in shell. Fix for missed subscribers in EventBus.
* View document functionality implemented
* 1) Editing of documents in text mode implemented. 2) Deleting of single document by right-click implemented.
* validation of JSON data in DocumentEditDialog
* changes in json.h and json.cpp wrapped in ROBOMONGO ifdef endif
* ptimeutil and ISO 8601 date format parsing
* parsing of ISODate(...) partially implemented
* upgraded to MongoDB r2.4.0-rc0
* several diff files
* shell impl for r2.4.0-rc0
* changes in misc.h and SConstruct documented
* docs folder
* ignoring *.pro.user.* files
* ability to add and view document
* unused header removed
* JsonBuilder added, used when preparing json string
* DocumentTextEditor dialog skeleton
* date-time format changed
* Signed milliseconds handled now correctly (`#5 <https://github.com/strands-project/robomongo/issues/5>`_)
* Default database now empty, when creating new connection (`#16 <https://github.com/strands-project/robomongo/issues/16>`_)
* Encoding problem for text view fixed (`#17 <https://github.com/strands-project/robomongo/issues/17>`_)
* version changed
* stop symbols extended to support partial editing with autocompletion. now we also support editing in the middle of the text, with autocompletion, if possible
* small refactoring of sanitize function
* autocompletion box positioned now near typed text
* autocompletion popup in logical place now. font of items in completion list now match the one in script widget
* word wrap disabled for ScriptWidget
* version changed
* 1) Stop symbols for autocompletion added
  2) No autocompletion for for single suggestion
  3) Correct handling of trailing whitespace symbols
* fix for crash on empty response text
* tree button was hidden. now fixed
* memory leaks fixed
* autocomplete by enter key
* trailing symbol detection fix for windows
* trailing new line detection fix
* fix for incorrect text overwrite
* autocompletion stop chars
* autocompletion popup closed by esc key
* popup flicking attempt 2
* do not redraw completion popup if already shown
* flicking of popup fixed
* rough version of autocomplete
* parts resize omited when count is less or equal to 1
* all parts are equal in size, if possible
* progress bar popup for shells
* shell progress indicator
* code cleanup of some files
* MongoWorker and MongoClient
* single MongoQueryInfo and MongoShellResult
* code cleanup of some files
* code cleanup in some files
* code cleanup of some files
* version changed
* version modified
* key icon for connections with auth
* 'count' instead of 'documents'
* collection tooltip
* order of members in class declaration
* double quotes and angle brackets style conforming
* pragma once instead of ifdef guards
* include directives were put in order
* project folder structure changed. robomonogo folder in the root of src/ folder.
* OutputViewer file now divided on several files
* readme updated
* 'outputable' empty file removed
* removed unnecessary getOwned calls
* fix for invalid read
* ownership of bsonobj
* fix for incorrect closing of shells and servers
* destructor for outputwidget
* databases and collections now sorted
* json preparation thread correct shutdown
* shell initialization, even for empty queries
* batchsize now 50. output result respect text/tree mode settings
* ownership on bsonobj taken in MongoClient
* pilot paging implementation
* query info
* output header mode buttons
* paging ui widget
* minor
* different panel background colors for wind and linux
* explorer back color
* current server indicator
* horizontal position of text on tab fixed
* tab styles
* elide fix
* tab text elidement possible fix
* ui tweaks
* ui tweaks
* round corners removed
* styling query area
* layout of querywidget changed. now shell pushed to bottom
* querywidget styling
* sunken top line style
* tab bottom color change
* separator between tabs and indicators
* indicators top line
* panel style for indicators
* current collection indicator
* invalid current database highlighted in red
* dead code removed
* current db and server tracking. current query, db, collection, server tracking
* connections dialog double click implemented and first item highlighted by default
* top status bar indicators
* tab styles
* lighter selected tab color
* current server and database indicator. platform dependent color of tabs
* unified openShell method
* ConnectionSettings ownership for MongoServer and MongoClient.
* connections item reordering via drag'n'drop
* connection management dialog received restyling
* some vars renamed
* default values for connection and credential settings
* databaseAddress renamed to serverHost, databasePort renamed to serverPort
* memory leaks for connection dialog fixed
* resource cleanup
* icons for diagnostic dialog
* fix for credential model
* connection diagnostic dialog and test button implemented
* ConnectionDialog's tabs now in separate files
* server and auth settings saving (partially)
* partially implemented editing of connection settings
* connection settings dialog polishing
* tabs width for connection dialog corrected
* auth tab for connection window
* notes for connection settings
* tabs in connection settings
* expanded connection edit dialog
* auth credentials editing in grid implemented
* before ConnectionRecord rename
* minor App changes
* ConnectionDialog code cleanup
* width of connection window changed
* connection cloning implemented
* double click on output pane toggles maximize/restore
* open key shortcut restored
* tooltip for Connect button
* polishing of mode switching
* maximization of OutputResult implemented
* json rendering by parts
* Date_t verification commented
* corrected initial proportional size of OutputViewer splitter parts
* 'type it for more' phrase removed
* Text and Tree mode switching (including async json text building)
* fixed icon for dbOpenShell
* context menu for server, database and collection
* shell tab context menu
* pointers instead of referencies for AppRegistry
* ScriptEngine distructed in his own thread
* ptr_vector not used any more in App
* App now owns MongoShells
* ConnectionRecords now owned by SettingsManager
* App now owns MongoServer. smart pointers don't used in this context
* minor
* icons for connection dialog items
* NO_OP macro
* QMainWindow separator size changed
* initial position and size of window corrected
* minor
* event bus now supports inter thread communication
* Dispatcher renamed to EventBus
* event subsystem cleanup
* Base class for all events
* before event subsystem restyling
* manual event dispatching removed
* instead of event dispatching now we are using QMetaObject::invokeMethod()
* WorkAreaTabBar cleanup
* polishing of WorkAreaTabBar
* statement database tracking via __robomongoDbName global script var. tab closing key bindings, tab cloning key bindings
* enter key open explorer tree item, and ctrl+w or ctrl+f4 closes active tab
* number of connections with shortcuts reduced to 9
* fix for segmentation error on windows when doing drag n drop of connections
* connection reordering and shortcuts for first 10 connections
* connection menu popup binded to hot key
* connections in popup menu for connect tool button
* popup menu for connect tool button
* finalize event for MongoClient
* fix for invalid read of deleted pointer
* memory leaks fixed and resource deallocation on tab close and server disconnect
* small fix for close tab action applied
* script query textbox now receives focus on tab activation
* placeholder commit to indicate fix of `#1 <https://github.com/strands-project/robomongo/issues/1>`_ (resize of tree columns)
* resize of tree columns enabled (`#5 <https://github.com/strands-project/robomongo/issues/5>`_)
* success execution report for `#4 <https://github.com/strands-project/robomongo/issues/4>`_
* fix for `#3 <https://github.com/strands-project/robomongo/issues/3>`_ - Shell does not output JavaScript errors
* tab margin corrected if only one tab
* new tab flicker fixed
* icons removed for full screen and disconnect actions
* context menu for server with two items: open shell and disconnect
* version updated
* main window icon
* windows executable file icon
* windows resource file
* connection fix and new server for shell now hidden in UI
* connect button icon
* icons for connection, execute, server, collection and rotate buttons
* close button icon
* space after tab
* elide mode for tabs
* tab icon
* tab title and tooltip
* tab bar styling for both win and linux
* tab bar styling for windows
* another close tab icon
* close tab icons
* main.cpp cleanup
* plugins path added to library path
* cleanup from webkit and qtscript
* correct switch to db
* Execute and Rotate tool buttons
* windows i386 libs and successfull compilcation for this platform
* Merge branch 'master' of https://github.com/paralect/robomongo
* windows dependencies for i386
* ptr_vector dependency removed
* Result header added to each result
* Full screen toggler
* now we can open selected text in new tab
* result set orientation toggler implemented
* multiple results support. correct handling of utf8 conversion implemented
* esprima integration
* esprima used as js parser for now
* PN_NAME arity excluded from tokens list
* statementizer for js, pilot version
* shells now run in different threads and scopes are isolated (but isolation not completely implemented). js syntax lexer added that modifies colors
* very bad way to show query string...
* Shell bar and display logic for docs and shell responses
* fix for script engine
* embedded shell
* system folders in explorer are hidden, if they are empty
* Auth handling implemented. Database name added to ConnectionRecord and dialog. correct handling of admin user.
* boost 1.49, spidermonkey 1.7, mongo shelell with minor modifications. all as static libs
* query editor style and autoresize
* JSEdit for query js edit box with autoresize
* polishing of ui
* scripting functions
* scriptengine and helper added
* global print function
* script engine added
* bson widget, tree widget and tree item
* workarea and querywindow
* name of collection fixed
* shell funcs
* MongoManager promoted to App
* domain folder added
* mongodb wrappers and workarea widgets
* collections loaded event added
* global notifications (pubsub)
* small steps for notifications
* automatic unsubscribe for Dispatcher implemented
* Dispatcher added
* minor
* send-reply for mongo client
* tree script edi
* events for all MongoClient replies added
* list of collections implemented
* connection progress
* async connections, even for the same address
* async connection, no leaks
* check for system database
* boost shared_ptr instead of QSharedPointer
* no leaks
* mongo client
* mongo wrapper, step one
* pre async
* minor
* explorer items
* mongodb and boost libs for linux (i386 and amd64). MongoManager, MongoServer
* mongoclient 2.2.0 lib for unix i386 and amd64
* normal icon added, shortcuts added and tooltip example added
* skeleton for explorer widget and log widget
* resources for icons added. main window added.
* run.sh for linux
* alt-hotkeys for buttons and menus
* pointer and address symbols style cleanup II
* pointer and address symbols style cleanup
* context menu for connection dialog
* polishing of EditConnectionDialog
* postfix Shared changed to simply Ptr
* SharedPointer used instead of implicit sharing
* refreshed ConnectionDialog
* add, edit, remove of connections
* connections dialog
* SettingsManager updates
* explicit shared data for ConnectionRecord
* Merge branch 'master' of https://github.com/paralect/robomongo
* SettingsManager changes
* pretargets for core.lib on windows
* settings load and save
* minor
* libqjson fix for linux
* core.h
* Merge branch 'master' of https://github.com/paralect/robomongo
* gitattributes
* connections manager
* rebuild all support for windows
* rebuild support for windows
* automatically add 'execute' bit to another scripts, when running ./build in the first time
* build script for linux now support 'all' mode. rebuild script for linux added.
* clean script for linux
* windows clean script accept 'all' arg
* support for debug and release in build script. clean script added
* build script support for release and debug modes
* OS_CPU fix for win32
* libs folder restructured
* fix for os and cpu build info
* OS and CPU names and types info during build
* fix for main.cpp
* Robomongo namespace
* Merge branch 'master' of https://github.com/paralect/robomongo
* minor
* .autosave added to ignore list
* .lib market as binary files
* Merge branch 'master' of https://github.com/paralect/robomongo
* home dir check
* qjson libs for windows
* location of qlibs changed
* qjson libs
* Settings manager
* ConnectionRecord added
* readme updated
* readme updated
* readme updated
* readme updated
* normalize line endings
* merge
* Merge branch 'master' of https://github.com/paralect/robomongo
* gitattributes
* windows build script fix
* initial
* Initial commit
* Contributors: Alexandr, Andres Kievsky, Dmitry Schetnikovich, Kanstantsin Kamkou, Konstantin, Luke Thompson, Marc Hanheide, Nils Bore, Roman Skvazh, Sergey Gavruk, Stephen Steneker, Vladimir Belozyorov, mirmasej, schentikovich, schetnikovich, topilski, volans-
