// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KINGPEPE_ATTRIBUTES_H
#define KINGPEPE_ATTRIBUTES_H

#if defined(__clang__)
#  if __has_attribute(lifetimebound)
#    define LIFETIMEBOUND [[clang::lifetimebound]]
#  else
#    define LIFETIMEBOUND
#  endif
#else
#  define LIFETIMEBOUND
#endif

#endif // KINGPEPE_ATTRIBUTES_H
