/************************************************************************
COPYRIGHT (C) SGS-THOMSON Microelectronics 2007

Source file name : codec_mme_audio_rma.h
Author :           Adam

Definition of the stream specific codec implementation for Real Media Audio in player 2


Date        Modification                                    Name
----        ------------                                    --------
28-Jan-09   Created                                         Julian

************************************************************************/

#ifndef H_CODEC_MME_AUDIO_RMA
#define H_CODEC_MME_AUDIO_RMA

// /////////////////////////////////////////////////////////////////////
//
//      Include any component headers

#include "codec_mme_audio.h"
#include "rma_audio.h"

// /////////////////////////////////////////////////////////////////////////
//
// Locally defined constants
//


// /////////////////////////////////////////////////////////////////////////
//
// Locally defined structures
//

// /////////////////////////////////////////////////////////////////////////
//
// The class definition
//


class Codec_MmeAudioRma_c : public Codec_MmeAudio_c
{
protected:

    // Data

    eAccDecoderId       DecoderId;
    eAccBoolean         RestartTransformer;

    // Functions

public:

    // Constructor/Destructor methods

    Codec_MmeAudioRma_c(                void );
    ~Codec_MmeAudioRma_c(               void );

    // Stream specific functions

protected:

    CodecStatus_t   FillOutTransformerGlobalParameters        ( MME_LxAudioDecoderGlobalParams_t *GlobalParams );
    CodecStatus_t   FillOutTransformerInitializationParameters( void );
    CodecStatus_t   FillOutSetStreamParametersCommand(          void );
    CodecStatus_t   FillOutDecodeCommand(                       void );
    CodecStatus_t   ValidateDecodeContext( CodecBaseDecodeContext_t *Context );
    CodecStatus_t   DumpSetStreamParameters(                    void    *Parameters );
    CodecStatus_t   DumpDecodeParameters(                       void    *Parameters );
};
#endif
