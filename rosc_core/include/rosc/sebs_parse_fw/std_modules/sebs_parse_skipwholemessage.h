/*
 *	Copyright (c) 2013, Synapticon GmbH
 *	All rights reserved.
 *
 *	Redistribution and use in source and binary forms, with or without
 *	modification, are permitted provided that the following conditions are met: 
 *
 *	1. Redistributions of source code must retain the above copyright notice, this
 *	   list of conditions and the following disclaimer. 
 *	2. Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution. 
 *
 *	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *	DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 *	ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *	The views and conclusions contained in the software and documentation are those
 *	of the authors and should not be interpreted as representing official policies, 
 *	either expressed or implied, of the FreeBSD Project.
 *
 *  sebs_parse_skipwholemessage.h created by Christian Holl
 */

#ifndef SEBS_PARSE_SKIPWHOLEMESSAGE_H_
#define SEBS_PARSE_SKIPWHOLEMESSAGE_H_

#include <rosc/system/types.h>
#include <rosc/sebs_parse_fw/sebs_parser_frame.h>

#define SEBS_PARSE_INIT_SKIPWHOLEMESSAGE(NEXT_PARSER_FUNC)\
		NEXT_PARSER_FUNC=(parser_submode_function_t)&skipwholemessage;\
		return (SEBS_PARSE_RETURN_INIT)

/**
 * This function skips every incoming char which is in the buffer.
 * It's used for skipping the message in case of errors.
 *
 * @param buf A pointer to the storage of the buffer
 * @param len The variable pointing to the length variable of the current buffer
 * @param unused not used by this function it needs no data storage..
 * @return This function will only return false because it can be only stopped by reseting the whole message handling
 */
sebs_parse_return_t sebs_parse_skipwholemessage(sebs_parser_data_t* pdata);

#endif /* SEBS_PARSE_SKIPWHOLEMESSAGE_H_ */
