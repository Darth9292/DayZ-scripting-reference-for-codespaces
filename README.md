# DayZ Scripting Reference for Codespaces

A comprehensive scripting reference for DayZ modding, optimized for GitHub Codespaces development. This repository contains extracted DayZ script files organized by module, providing a complete reference for mod developers.

> **🤖 For AI Assistants**: Read [`AI_MODDING_PRIMER.md`](./AI_MODDING_PRIMER.md) first for comprehensive context about DayZ modding conventions, EnforceScript syntax, common patterns, and best practices.

## Repository Structure

### `reference/`
Complete DayZ script reference organized by game modules:
- **1_core/** - Core engine functionality (constants, defines, parameters, workbench API)
- **2_gamelib/** - Game library components (input manager, menu manager, settings, tools)
- **3_game/** - Game systems (AI, entities, effects, player mechanics, weather, vehicles)
- **4_world/** - World entities (items, lights, plugins, vehicles, scripts)
- **5_mission/** - Mission scripting (GUI, menus, HUD, mission logic)
- **config.cpp** - DayZ configuration file
- **data/** - Game data files (JSON configs, tutorials, credits)
- **editor/** - Workbench editor plugins and projects
- **entities/** - Entity implementations and utilities

### `mod/Scripts/`
Template structure for custom mod development:
- **3_Game/** - Game-level mod scripts
- **4_World/** - World-level mod scripts
- **5_Mission/** - Mission-level mod scripts
- **Common/** - Common utilities and shared code

## Usage

This repository serves as a reference for DayZ modding in GitHub Codespaces:

1. Browse the `reference/` directory to understand vanilla DayZ script structure
2. Use the `mod/Scripts/` template to organize your custom mod code
3. Reference class definitions, methods, and game systems from the extracted scripts
4. Leverage Codespaces for cloud-based DayZ mod development

## Features

- Complete DayZ script extraction from game files
- Organized module hierarchy matching game structure
- Ready-to-use mod template structure
- Optimized for GitHub Codespaces development environment
- Includes configuration files and editor resources

## Getting Started

### For AI Assistants
**Start here**: [`AI_MODDING_PRIMER.md`](./AI_MODDING_PRIMER.md) contains everything needed to understand DayZ modding:
- EnforceScript language fundamentals
- Module hierarchy and class inheritance patterns
- Common modding patterns with code examples
- Client/server architecture and synchronization
- Configuration file structure
- Debugging practices and common pitfalls
- Complete workflow guidelines

### For Developers
1. Open this repository in GitHub Codespaces
2. Explore the `reference/` directory to familiarize yourself with DayZ scripting
3. Start building your mod in the `mod/Scripts/` directory
4. Reference vanilla implementations when implementing custom functionality
5. Point your AI assistant to `AI_MODDING_PRIMER.md` for context-aware help

## Notes

- Scripts are extracted from DayZ game files for reference purposes
- Use `reference/` as read-only documentation
- Place your custom mod code in `mod/Scripts/`
- Follow DayZ modding best practices and naming conventions

## Resources

- [DayZ Modding Documentation](https://community.bistudio.com/wiki/DayZ:Modding_Basics)
- [Bohemia Interactive Community Wiki](https://community.bistudio.com/)
- [DayZ Forums](https://forums.dayz.com/)