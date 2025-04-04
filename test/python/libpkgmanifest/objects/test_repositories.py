import libpkgmanifest.common

import base_test_case


class TestRepositories(base_test_case.BaseTestCase):
    def test_iterator(self):
        repositories = libpkgmanifest.common.Repositories()

        repository1 = libpkgmanifest.common.Repository()
        repository1.id = 'repo1'
        repository2 = libpkgmanifest.common.Repository()
        repository2.id = 'repo2'

        repositories.add(repository1)
        repositories.add(repository2)

        self.assertEqual(['repo1', 'repo2'], [repository.id for repository in repositories])
