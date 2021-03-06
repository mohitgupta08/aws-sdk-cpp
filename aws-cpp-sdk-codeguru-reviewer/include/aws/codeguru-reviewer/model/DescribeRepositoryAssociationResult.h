﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{
  class AWS_CODEGURUREVIEWER_API DescribeRepositoryAssociationResult
  {
  public:
    DescribeRepositoryAssociationResult();
    DescribeRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the repository association.</p>
     */
    inline const RepositoryAssociation& GetRepositoryAssociation() const{ return m_repositoryAssociation; }

    /**
     * <p>Information about the repository association.</p>
     */
    inline void SetRepositoryAssociation(const RepositoryAssociation& value) { m_repositoryAssociation = value; }

    /**
     * <p>Information about the repository association.</p>
     */
    inline void SetRepositoryAssociation(RepositoryAssociation&& value) { m_repositoryAssociation = std::move(value); }

    /**
     * <p>Information about the repository association.</p>
     */
    inline DescribeRepositoryAssociationResult& WithRepositoryAssociation(const RepositoryAssociation& value) { SetRepositoryAssociation(value); return *this;}

    /**
     * <p>Information about the repository association.</p>
     */
    inline DescribeRepositoryAssociationResult& WithRepositoryAssociation(RepositoryAssociation&& value) { SetRepositoryAssociation(std::move(value)); return *this;}

  private:

    RepositoryAssociation m_repositoryAssociation;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
