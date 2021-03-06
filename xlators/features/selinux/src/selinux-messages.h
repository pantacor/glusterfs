/*
  Copyright (c) 2017 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#ifndef _SELINUX_MESSAGES_H__
#define _SELINUX_MESSAGES_H__

#include "glfs-message-id.h"

/*! \file selinux-messages.h
 *  \brief Selinux log-message IDs and their descriptions
 */

/* NOTE: Rules for message additions
 * 1) Each instance of a message is _better_ left with a unique message ID, even
 *    if the message format is the same. Reasoning is that, if the message
 *    format needs to change in one instance, the other instances are not
 *    impacted or the new change does not change the ID of the instance being
 *    modified.
 * 2) Addition of a message,
 *       - Should increment the GLFS_NUM_MESSAGES
 *       - Append to the list of messages defined, towards the end
 *       - Retain macro naming as glfs_msg_X (for readability across developers)
 * NOTE: Rules for message format modifications
 * 3) Check acorss the code if the message ID macro in question is reused
 *    anywhere. If reused then then the modifications should ensure correctness
 *    everywhere, or needs a new message ID as (1) above was not adhered to. If
 *    not used anywhere, proceed with the required modification.
 * NOTE: Rules for message deletion
 * 4) Check (3) and if used anywhere else, then cannot be deleted. If not used
 *    anywhere, then can be deleted, but will leave a hole by design, as
 *    addition rules specify modification to the end of the list and not filling
 *    holes.
 */

#define GLFS_SL_BASE                GLFS_MSGID_COMP_SL
#define GLFS_SL_NUM_MESSAGES        5
#define GLFS_SL_MSGID_END           (GLFS_SL_BASE + GLFS_NUM_MESSAGES + 1)
/* Messages with message IDs */
#define glfs_msg_start_x GLFS_SL_BASE, "Invalid: Start of messages"
/*------------*/

#define SL_MSG_INVALID_VOLFILE          (GLFS_SL_BASE + 1)

/*!
 * @messageid
 * @diagnosis
 * @recommendedaction
 *
 */

#define SL_MSG_ENOMEM                   (GLFS_SL_BASE + 2)

/*!
 * @messageid
 * @diagnosis
 * @recommendedaction
 *
 */

#define SL_MSG_MEM_ACCT_INIT_FAILED     (GLFS_SL_BASE + 3)

/*!
 * @messageid
 * @diagnosis
 * @recommendedaction
 *
 */

#define SL_MSG_SELINUX_GLUSTER_XATTR_MISSING (GLFS_SL_BASE + 4)

/*!
 * @messageid
 * @diagnosis
 * @recommendedaction
 *
 */

#define SL_MSG_SELINUX_XATTR_MISSING    (GLFS_SL_BASE + 5)

/*!
 * @messageid
 * @diagnosis
 * @recommendedaction
 *
 */

/*-----------*/
#define glfs_msg_end_x GLFS_MSGID_END, "Invalid: End of messages"

#endif /*_SELINUX_MESSAGES_H */

