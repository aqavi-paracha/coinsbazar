// Copyright (c) 2011-2014 The CoinsBazar developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINADDRESSVALIDATOR_H
#define BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CoinsBazarAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CoinsBazarAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** CoinsBazar address widget validator, checks for a valid bitcoin address.
 */
class CoinsBazarAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CoinsBazarAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINADDRESSVALIDATOR_H
