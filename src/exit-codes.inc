#!/usr/bin/env bash

# ==============================================================================
# Restricting user-defined exit codes to the range 64 - 113 (in addition to 0,
# for success) allows for 50 exit codes. The range 114-125 *could* be utilized
# (adding another ten codes) but DO NOT GO BEYOND 126!
# ==============================================================================

# ==============================================================================
# Generic exit codes
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_OK:=0}"
# ------------------------------------------------------------------------------
# Program errors (60 range)
# -----------------------------------------------------------------------------
: readonly -i "${EXIT_UNKNOWN_ERROR_OCCURRED:=64}"
: readonly -i "${EXIT_NOT_ENOUGH_PARAMETERS:=65}"
: readonly -i "${EXIT_INVALID_PARAMETER:=66}"
# ------------------------------------------------------------------------------
# File and folder errors (70 range)
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_COULD_NOT_FIND_DIRECTORY:=75}"
# ==============================================================================

# ==============================================================================
# Application errors (93-113 range)
# ------------------------------------------------------------------------------
: readonly -i "${EXIT_COULD_FETCH_FROM_REMOTE:=93}"
# ==============================================================================
